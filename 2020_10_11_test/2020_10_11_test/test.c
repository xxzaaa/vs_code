//结构体
#include<stdio.h>
#include<windows.h>
#define SIZE 64
// struct Stu:定义了一个自定义类型（相对于内置类型）
struct Stu{
	char name[SIZE];
	int age;
	char sex[SIZE/8];
	char telphone[SIZE / 4];

};
int main(){

	struct Stu Tom = {"Tom",19,"男","1234567"};
	struct Stu* p = &Tom;
	printf("%s,%s\n", Tom.name, Tom.telphone);
	printf("%s,%s\n", (*p).name, (*p).telphone);
	printf("%d,%s\n", p->age, p->sex);
	system("pause");
	return 0;
}