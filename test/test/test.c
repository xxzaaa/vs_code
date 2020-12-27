#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main(){

	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;

}