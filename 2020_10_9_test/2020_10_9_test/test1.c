#include<stdio.h>
#include<windows.h>

//extern int g_val;//��������
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

	////ָ�� vs ָ�����
	//int a = 10;
	//int* p = &a;// p��ָ�������Ҫ���ٿռ䣬�б��������б�������

	system("pause");
	return 0;
}