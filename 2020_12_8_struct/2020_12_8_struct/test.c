#include<stdio.h>
#include<windows.h>

//struct Point{
//	int x;
//	int y;
//}p1;//�������͵�ͬʱ�������p1
//struct Point p2;//����ṹ�����p2
//struct Point p3 = { 10, 20 };//��ʼ�������������ͬʱ����ֵ
//
//struct Stu//��������
//{
//	char name[15];//����
//	int age;//����
//};
//struct Stu s = { "Zhangsan", 20 };//��ʼ��
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5},NULL};//�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { 20, { 5, 6 }, NULL };//�ṹ��Ƕ�׳�ʼ��
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* ps){
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age);
//	//ʹ�ýṹ��ָ�����ָ������ĳ�Ա
//	printf("name = %s  age = %d\n", ps->name, ps->age);
//}

//struct S
//{
//	double d;//8
//	char c;//1
//	int i;//3+4
//};
//struct S1
//{
//	char c1;//1
//	struct S s;//7+16
//	double d;//8
//};
//struct S2
//{
//	char x;//1
//	char *cp;//3+4
//	char a[3];//3
//	double *b[5];//1+20
//	struct S1 *s;//4   ---->36
//	struct S1 d[3];//4+32*3  ---->136
//	char e;//1   ---->137
//};//137->8:144
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16
//	printf("%d\n", sizeof(struct S1));//32
//	printf("%d\n", sizeof(struct S2));//144
//	system("pause");
//	return 0;
//}

struct S
{
	int data[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
//�ṹ�崫��
void print1(struct S s){
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps){
	printf("%d\n", ps->num);
}
union Un{
	int i;
	char c;
};
union Un un;
int main()
{
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);

	print1(s);//���ṹ��
	print2(&s);//����ַ
	system("pause");
	return 0;
}