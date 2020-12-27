#include<stdio.h>
#include<windows.h>

//struct Point{
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1
//struct Point p2;//定义结构体变量p2
//struct Point p3 = { 10, 20 };//初始化，定义变量的同时赋初值
//
//struct Stu//类型声明
//{
//	char name[15];//名字
//	int age;//年龄
//};
//struct Stu s = { "Zhangsan", 20 };//初始化
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5},NULL};//结构体嵌套初始化
//struct Node n2 = { 20, { 5, 6 }, NULL };//结构体嵌套初始化
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void print(struct Stu* ps){
//	printf("name = %s  age = %d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向变量的成员
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
//结构体传参
void print1(struct S s){
	printf("%d\n", s.num);
}
//结构体地址传参
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

	print1(s);//传结构体
	print2(&s);//传地址
	system("pause");
	return 0;
}