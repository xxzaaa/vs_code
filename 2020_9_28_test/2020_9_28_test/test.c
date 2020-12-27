#include <stdio.h>
#include <windows.h>
#define SIZE 5
//函数的声明与定义
int MyAdd(int _a, int _b) //形参 
{
	printf("after:_a:%p,_b:%p\n", &_a, &_b);
	printf("after:_a:%d,_b:%d\n", _a, _b);
	int _res = _a + _b; //局部变量—>作用域&&生命周期
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
	//int result = MyAdd(a, b); //实参
	//printf("result:%d\n",result);
	//system("pause");
	//return 0;

	////数组的定义与初始化
	//int arr[] = {11,22,33};
	//printf("%d\n", sizeof(arr));//求数组的总大小
	//printf("%d\n", sizeof(arr[0]));//求数组的一个元素的大小
	////动态求出数组中元素的个数
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num:%d\n",num);
	////数组的遍历
	//for (int i = 0; i < SIZE; i++){
	//	printf("arr[%d]: %d\n", i, arr[i]);
	//}


	//操作符 
	//二进制
	//  1 -> 1
	//  2 -> 10
	//  4 -> 100
	//  8 -> 1000
	// 2^n -> 1...n个0
	// 10 -> 1010 -> 1000 + 0010 ->2^3 + 2^2
	// 17 -> 16+1 -> 2^4 + 2^0 ->10000 + 1 ->10001
	// 33 -> 32+1 -> 2^5 + 2^0 ->100000 + 1 ->100001
	// 37 -> 32+4+1 -> 2^5 + 2^2 + 2^0->100000 + 100 + 1 ->100101
	system("pause");
	return 0;


}