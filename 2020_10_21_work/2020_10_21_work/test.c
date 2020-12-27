#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)  
//1:是闰年 0：不是闰年
int IsLeapYear(int year){
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	};
}
//交换两个整数
int Exchange(int *a, int *b){
	int *temp=*a;
	*a = *b;
	*b = temp;

}
//打印乘法口诀表
int Mult(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (j >= i){
				printf("%d*%d=%d  ", i, j, i*j);
			}
		}
		printf("\n");
	}
}
//打印一个数的每一位(递归)
int print(unsigned int x){
	if(x > 9){
		print(x / 10);
	}
	printf("%d ", x % 10);
}

int Strlen1(char *str){
	//递归
	if (*str == '\0'){
		return 0;
	}
	return 1 + Strlen1(str + 1);
}
int Strlen2(char *str){
	//非递归
	char *start = str;
	int count = 0;
	while (*start != '\0'){
		count++;
		*start++;
	}
	return count;
}
int fac1(int n){
	//递归
	if (n <= 1){
		return 1;
	}
	return n*fac1(n - 1);
}
int fac2(int n){
	//非递归
	int fac = 1;
	for (int i = 2; i <= n; i++){
		fac *= i;
	}
	return fac;
}

int main(){
	int n = 0;
	printf("请输入一个正整数n:");
	scanf("%d", &n);
	printf("%d的阶乘是%d.\n", n, fac1(n));
	printf("%d的阶乘是%d.\n", n, fac2(n));
	//char *x = "abcdefg";
	//printf("字符串长度为：%d\n",Strlen1(x));
	//printf("字符串长度为：%d\n",Strlen2(x));
	//int x = 1234;
	//print(x);
	//int x = 12;
	//Mult(12);
	//int x = 1;
	//int y = 2;
	//Exchange(&x, &y);
	//printf("%d %d\n", x, y);
	//int year = 0;
	//printf("请输入要判断的年份：");
	//scanf("%d", &year);
	//if (IsLeapYear(year)){
	//	printf("%d年是闰年。", year);
	//}
	//else{
	//	printf("%d年不是闰年。", year);
	//}
	system("pause");
	return 0;
}