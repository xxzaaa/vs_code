//��֧����ѭ�����

#include<stdio.h>
#include<windows.h>
#define _AGE_ 18
#pragma warning(disable:4996)
int main(){
	//����Ļ�ϴ�ӡ1��10������
	//int i = 1;
	//while (i <= 10){
	//	printf("%d ",i);
	//	i = i + 1;
	//}
	//printf("\n");
	int ch = 0;
	while ((ch = getchar()) != EOF){//C������ ctrl + z:�������
		putchar(ch);
	}



	system("pause");
	return 0;
	//printf("�����ˣ�");
	//int age = 0;
	//scanf("%d", &age);
	//if (age < _AGE_){
	//	printf("����!\n");
	//}
	//else if (age >= 18 && age < 30){
	//	printf("����!\n");
	//}
	//else if (age >= 30 && age < 50){
	//	printf("����!\n");
	//}
	//else if (age >= 50 && age < 100){
	//	printf("����!\n");
	//}
	//else{
	//	printf("ţ��!\n");
	//}

	//�ж�һ�����Ƿ�Ϊ����
	//int x = 0;
	//printf("������Ҫ�жϵ�����");
	//scanf("%d", &x);
	//if (x % 2 == 1){
	//	printf("%d��������\n", x);
	//}
	//else{
	//	printf("%d����������\n",x);
	//}
	//int x = 0;
	//printf("������Ҫ�жϵ�����");
	//scanf("%d", &x);
	//if (x & 1){                  //��λ��
	//	printf("%d��������\n", x);
	//}
	//else{
	//	printf("%d����������\n", x);
	//}

	//���1~100֮�������
	//int x = 1;
	//while (x <= 100){
	//	if (x & 1){
	//		printf("%d ", x);
	//	}
	//	x++;
	//}
	//printf("\n");
	//int day = 0;
	//printf("�����룺");
	//scanf("%d", &day);
	//switch (day){
	//case 1:
	//	printf("����һ��\n");
	//	break;
	//case 2:
	//	printf("���ڶ���\n");
	//	break;
	//case 3:
	//	printf("��������\n");
	//	break;
	//case 4:
	//	printf("�����ģ�\n");
	//	break;
	//case 5:
	//	printf("�����壡\n");
	//	break;
	//case 6:
	//	printf("��������\n");
	//	break;
	//case 7:
	//	printf("�����գ�\n");
	//	break;
	//default:
	//	printf("������1~7!\n");
	//	break;
	//}
	//int day = 0;
	//printf("�����룺");
	//scanf("%d", &day);
	//switch (day){
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("weekday��\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("weekend��\n");
	//	break;
	//default:
	//	printf("������1~7!\n");
	//	break;
	//}

}
