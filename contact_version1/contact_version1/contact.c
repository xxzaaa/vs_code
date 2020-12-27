#include "contact.h"

//判断通讯录是否已满
static int IsFull(contact_t *ct){
	assert(ct);
	return ct->size == ct->cap;
}

//检测当前号码是否已经存在
//存在：返回-->person index
//不存在：返回-->-1
static int IsExist(contact_t *ct, const char *telphone){
	assert(telphone);
	person_t *end = ct->persons + ct->size;
	for (person_t *p = ct->persons; p < end; p++){
		if (0 == strcmp(p->telphone, telphone)){
			return p-ct->persons;//返回数组元素下标
		}
	} 
	return -1;
}
//检测当前姓名是否已经存在
//存在：返回-->person index
//不存在：返回-->-1
static int IsExist_name(contact_t *ct, const char *name){
	assert(name);
	person_t *end = ct->persons + ct->size;
	for (person_t *p = ct->persons; p < end; p++){
		if (0 == strcmp(p->name, name)){
			return p - ct->persons;//返回数组元素下标
		}
	}
	return -1;
}

static void SearchPersonNameHelper(contact_t *ct){
	assert(ct);
	char search_key[SIZE / 4];
	printf("请输入您要查找的姓名：");
	scanf("%s", search_key);
	int index = IsExist_name(ct, search_key);
	if (-1 == index){
		printf("您要查找的姓名[%s]不存在！\n",search_key);
		return;
	}
	else{ 
		ShowContact(ct, index);
	}
}

static void SearchPersonTelHelper(contact_t *ct){
	assert(ct);
	char search_key[SIZE / 4];
	printf("请输入您要查找的电话号码：");
	scanf("%s", search_key);
	int index = IsExist(ct, search_key);
	if (-1 == index){
		printf("您要查找的号码[%s]不存在！\n", search_key);
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
	printf("姓名：");
	scanf("%s", p->name);
	printf("电话：");
	scanf("%s", p->telphone);
	//以telephone为键值判断要插入的联系人是否已经存在
	if (IsExist(ct,p->telphone)>=0){
		printf("%s is exist!\n",p->name);
		return;
	}
	printf("性别：");
	scanf("%s", p->sex);
	printf("年龄：");
	scanf("%d", &(p->age));
	printf("地址：");
	scanf("%s", p->address);
	ct->size += 1;
	printf("add success!\n");
}

void DeletePerson(contact_t *ct){
	assert(ct);
	char del_key[SIZE / 4];
	printf("请输入您要删除的电话号码：");
	scanf("%s", del_key);
	int index = 0;
	if ((index = IsExist(ct, del_key))>=0){
		//删除
		ct->persons[index] = ct->persons[ct->size - 1];
		ct->size -= 1;
	}
	else{
		printf("您要删除的[ %s ]不存在!\n",del_key);
		return;
	}
	printf("Delete success!\n");
}

void SearchPerson(contact_t *ct){
	assert(ct);
	printf("################################\n");
	printf("##  1. 按照姓名  2. 按照电话  ##\n");
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
	printf("请输入您要修改的电话号码：");
	scanf("%s", mod_key);
	int index = 0;
	if ((index = IsExist(ct, mod_key)) >= 0){
		//修改特定信息
		printf("#################################\n");
		printf("##  1. 姓名           2. 性别  ##\n");
		printf("##  3. 年龄           4. 电话  ##\n");
		printf("##  5. 地址           6. 取消  ##\n");
		printf("#################################\n");
		printf("请选择要修改的信息：\n");
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			printf("请输入新的姓名：");
			scanf("%s", (ct->persons[index]).name);
			break;
		case 2:
			printf("请输入新的性别：");
			scanf("%s", (ct->persons[index]).sex);
			break;
		case 3:
			printf("请输入新的年龄：");
			scanf("%d", (ct->persons[index]).age);
			break;
		case 4:
			printf("请输入新的电话：");
			scanf("%s", (ct->persons[index]).telphone);
			break;
		case 5:
			printf("请输入新的地址：");
			scanf("%s", (ct->persons[index]).address);
		case 6:
			break;
		}
	}
	else{
		printf("您要修改的[ %s ]不存在!\n", mod_key);
		return;
	}
}


void ShowContact(contact_t *ct, int index){
	assert(ct);
	if (-1 == index){
		person_t *end = ct->persons + ct->size;
		printf("统计：%d/%d\n", ct->size, ct->cap);
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

