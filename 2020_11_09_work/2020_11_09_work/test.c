#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning(disable:4996)
#define MAX 100000
//字符串逆序
void Reverse(char *str){
	char *left = str;
	char *right = str + strlen(str) - 1;
	while (left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}

}
//喝汽水问题

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty>1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("total = %d\n", total);
	system("pause");
	return 0;
}
int main(){

	for (int i = 0; i < MAX; i++){
		int count = 1;
		int temp = i;
		int sum = 0;
		while (temp/ 10){
			count++;
			temp /= 10;
		}
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, count);
			temp  /= 10;
		}
		if (sum == i){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}

int main()
{
	int line = 7;
	int i = 0;
	//打印上半部分
	for (i = 0; i<line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i<line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
计算求和：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
*/
int main(){
	int a = 0;
	int n = 0;
	int sum = 0;
	int temp = 0;
	scanf("%d%d", &a, &n);
	for (int i = 0; i < n; i++){
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int main(){
	//char str[] = "abcdefg";
	//Reverse(str);
	//printf("%s\n", str);
	char str[101] = { 0 };
	while (gets(str))
	{
		Reverse(str);
		printf("%s\n", str);
		memset(str, 0, sizeof(str) / sizeof(str[0]));
	}
	system("pause");
	return 0;
}