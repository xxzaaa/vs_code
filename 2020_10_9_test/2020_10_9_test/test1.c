#include<stdio.h>
#include<windows.h>

//extern int g_val;//声明变量
//extern void show();

void test()
{
	int ii = 0;
	ii++;
	printf("%d\n", ii);
}

int main()
{
	for (int i = 0; i < 10;i++){
		test();
	}
	//printf("%d\n", g_val);
	//show();

	////指针 vs 指针变量
	//int a = 10;
	//int* p = &a;// p是指针变量：要开辟空间，有变量名，有变量内容

	system("pause");
	return 0;
}