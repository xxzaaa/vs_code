#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main(){
	//������Ҫ�ȶ��壬��ʹ�� 
	//int i = 0;
	//for (; i < 10; i++){
	//	printf("%d\n", i);
	//	Sleep(1000);
	//}
	//����n�Ľ׳�
	//int n = 0;
	//printf("please input n = :");
	//scanf("%d", &n);
	//int result = Fact(n);
	//printf("result =%d\n", result);
	//����1!+2!+3!+...+10!
	int result = 0;
	for (int i = 1; i <= 10; i++){
		result += Fact(i);
	}
	printf("result =%d\n", result);
	//ʹ��forѭ������Ļ�ϴ�ӡ1��10������
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