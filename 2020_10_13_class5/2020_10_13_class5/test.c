#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main(){
	//变量需要先定义，再使用 
	//int i = 0;
	//for (; i < 10; i++){
	//	printf("%d\n", i);
	//	Sleep(1000);
	//}
	//计算n的阶乘
	//int n = 0;
	//printf("please input n = :");
	//scanf("%d", &n);
	//int result = Fact(n);
	//printf("result =%d\n", result);
	//计算1!+2!+3!+...+10!
	int result = 0;
	for (int i = 1; i <= 10; i++){
		result += Fact(i);
	}
	printf("result =%d\n", result);
	//使用for循环在屏幕上打印1—10的数字
	//int i = 0;
	//for (i = 1; i <= 10; i++){
	//	printf("%d\n", i);	
	//}
	system("pause");
	return 0;
} 

int Fact(int top){
	int result = 1;
	for (int i = top; i > 0; i--){
		result *= i;
	}
	return result;
}