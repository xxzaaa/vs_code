#include <stdio.h>
#include <windows.h>
#define SIZE 5
//�����������붨��
int MyAdd(int _a, int _b) //�β� 
{
	printf("after:_a:%p,_b:%p\n", &_a, &_b);
	printf("after:_a:%d,_b:%d\n", _a, _b);
	int _res = _a + _b; //�ֲ�������>������&&��������
	return _res;
}  

void show()
{
	static int i = 0;
	++i;
	printf("i:%d\n", i);
}

int main()
{
	printf("%d\n", g_val);
	//for (int i = 0; i < 10; i++){
	//	show();
	//}
	//int a = 10;
	//int b = 20;
	//printf("before:a:%p,b:%p\n",&a,&b);
	//printf("before:a:%d,b:%d\n", a, b);
	//int result = MyAdd(a, b); //ʵ��
	//printf("result:%d\n",result);
	//system("pause");
	//return 0;

	////����Ķ������ʼ��
	//int arr[] = {11,22,33};
	//printf("%d\n", sizeof(arr));//��������ܴ�С
	//printf("%d\n", sizeof(arr[0]));//�������һ��Ԫ�صĴ�С
	////��̬���������Ԫ�صĸ���
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num:%d\n",num);
	////����ı���
	//for (int i = 0; i < SIZE; i++){
	//	printf("arr[%d]: %d\n", i, arr[i]);
	//}


	//������ 
	//������
	//  1 -> 1
	//  2 -> 10
	//  4 -> 100
	//  8 -> 1000
	// 2^n -> 1...n��0
	// 10 -> 1010 -> 1000 + 0010 ->2^3 + 2^2
	// 17 -> 16+1 -> 2^4 + 2^0 ->10000 + 1 ->10001
	// 33 -> 32+1 -> 2^5 + 2^0 ->100000 + 1 ->100001
	// 37 -> 32+4+1 -> 2^5 + 2^2 + 2^0->100000 + 100 + 1 ->100101
	system("pause");
	return 0;


}