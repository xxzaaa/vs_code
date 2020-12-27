#include "contact.h"

//�ж�ͨѶ¼�Ƿ�����
static int IsFull(contact_t *ct){
	assert(ct);
	return ct->size == ct->cap;
}

//��⵱ǰ�����Ƿ��Ѿ�����
//���ڣ�����-->person index
//�����ڣ�����-->-1
static int IsExist(contact_t *ct, const char *telphone){
	assert(telphone);
	person_t *end = ct->persons + ct->size;
	for (person_t *p = ct->persons; p < end; p++){
		if (0 == strcmp(p->telphone, telphone)){
			return p-ct->persons;//��������Ԫ���±�
		}
	} 
	return -1;
}
//��⵱ǰ�����Ƿ��Ѿ�����
//���ڣ�����-->person index
//�����ڣ�����-->-1
static int IsExist_name(contact_t *ct, const char *name){
	assert(name);
	person_t *end = ct->persons + ct->size;
	for (person_t *p = ct->persons; p < end; p++){
		if (0 == strcmp(p->name, name)){
			return p - ct->persons;//��������Ԫ���±�
		}
	}
	return -1;
}

static void SearchPersonNameHelper(contact_t *ct){
	assert(ct);
	char search_key[SIZE / 4];
	printf("��������Ҫ���ҵ�������");
	scanf("%s", search_key);
	int index = IsExist_name(ct, search_key);
	if (-1 == index){
		printf("��Ҫ���ҵ�����[%s]�����ڣ�\n",search_key);
		return;
	}
	else{ 
		ShowContact(ct, index);
	}
}

static void SearchPersonTelHelper(contact_t *ct){
	assert(ct);
	char search_key[SIZE / 4];
	printf("��������Ҫ���ҵĵ绰���룺");
	scanf("%s", search_key);
	int index = IsExist(ct, search_key);
	if (-1 == index){
		printf("��Ҫ���ҵĺ���[%s]�����ڣ�\n", search_key);
		return;
	}
	else{
		ShowContact(ct, index);
	}
}

static int CompPerson(const void *x, const void *y){
	person_t *x_p = (person_t *)x;
	person_t *y_p = (person_t *)y;
	return strcmp(x_p->name, y_p->name);
}

void AddPerson(contact_t *ct)
{
	assert(ct); 
	if (IsFull(ct)){
		printf("contact is full!\n");
	}
	person_t *p = ct->persons + ct->size;
	printf("������");
	scanf("%s", p->name);
	printf("�绰��");
	scanf("%s", p->telphone);
	//��telephoneΪ��ֵ�ж�Ҫ�������ϵ���Ƿ��Ѿ�����
	if (IsExist(ct,p->telphone)>=0){
		printf("%s is exist!\n",p->name);
		return;
	}
	printf("�Ա�");
	scanf("%s", p->sex);
	printf("���䣺");
	scanf("%d", &(p->age));
	printf("��ַ��");
	scanf("%s", p->address);
	ct->size += 1;
	printf("add success!\n");
}

void DeletePerson(contact_t *ct){
	assert(ct);
	char del_key[SIZE / 4];
	printf("��������Ҫɾ���ĵ绰���룺");
	scanf("%s", del_key);
	int index = 0;
	if ((index = IsExist(ct, del_key))>=0){
		//ɾ��
		ct->persons[index] = ct->persons[ct->size - 1];
		ct->size -= 1;
	}
	else{
		printf("��Ҫɾ����[ %s ]������!\n",del_key);
		return;
	}
	printf("Delete success!\n");
}

void SearchPerson(contact_t *ct){
	assert(ct);
	printf("################################\n");
	printf("##  1. ��������  2. ���յ绰  ##\n");
	printf("################################\n");
	int select = 0;
	printf("Please select:> ");
	scanf("%d", &select);
	switch (select){
	case 1:
		SearchPersonNameHelper(ct);
		break;
	case 2:
		SearchPersonTelHelper(ct);
		break;
	default:
		break;
	}
}

void ModPerson(contact_t *ct){
	assert(ct);
	char mod_key[SIZE / 4];
	printf("��������Ҫ�޸ĵĵ绰���룺");
	scanf("%s", mod_key);
	int index = 0;
	if ((index = IsExist(ct, mod_key)) >= 0){
		//�޸��ض���Ϣ
		printf("#################################\n");
		printf("##  1. ����           2. �Ա�  ##\n");
		printf("##  3. ����           4. �绰  ##\n");
		printf("##  5. ��ַ           6. ȡ��  ##\n");
		printf("#################################\n");
		printf("��ѡ��Ҫ�޸ĵ���Ϣ��\n");
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			printf("�������µ�������");
			scanf("%s", (ct->persons[index]).name);
			break;
		case 2:
			printf("�������µ��Ա�");
			scanf("%s", (ct->persons[index]).sex);
			break;
		case 3:
			printf("�������µ����䣺");
			scanf("%d", (ct->persons[index]).age);
			break;
		case 4:
			printf("�������µĵ绰��");
			scanf("%s", (ct->persons[index]).telphone);
			break;
		case 5:
			printf("�������µĵ�ַ��");
			scanf("%s", (ct->persons[index]).address);
		case 6:
			break;
		}
	}
	else{
		printf("��Ҫ�޸ĵ�[ %s ]������!\n", mod_key);
		return;
	}
}


void ShowContact(contact_t *ct, int index){
	assert(ct);
	if (-1 == index){
		person_t *end = ct->persons + ct->size;
		printf("ͳ�ƣ�%d/%d\n", ct->size, ct->cap);
		printf("-----------------------------------------------\n");
		for (person_t *p = ct->persons; p < end; p++){
			printf("|%-8s|%-1s|%-2d|%-11s|%-18s|\n", p->name, p->sex, p->age, p->telphone, p->address);
			printf("-----------------------------------------------\n");
		}
	}
	else{			
		person_t *p = ct->persons + index;
		printf("|%-8s|%-1s|%-2d|%-11s|%-18s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
}

void ClsContact(contact_t *ct){
	assert(ct);
	ct->size = 0;  
}
void SortContact(contact_t *ct){
	assert(ct);
	qsort(ct->persons,ct->size,sizeof(person_t),CompPerson);
	printf("Sort success!\n");
}

