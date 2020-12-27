#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
void hanio(int n, char a, char b, char c){//搬n个盘子从a到c，b为过渡
	if (n == 1){
		printf("%c-->%c\t", a, c);//只有一个盘子，直接从a搬到c
	}
	else{
		hanio(n - 1, a, c, b);//先将a塔上面(最大的在下面)的n-1个盘子，搬到b，c为过渡
		printf("%c-->%c\t", a, c);//再把最后一个盘子从a搬到c
		hanio(n - 1, b, a, c);//搬完之后n-1个盘子搬到了b塔，b开始做为开始塔，a为过渡塔，将n-1个盘子从b搬到c
	}
}
//字符串逆序（循环实现）
void reverse_string1(char *str){
	char *left = str;
	char *right = str + strlen(str - 1);
	while (left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
//字符串逆序（递归实现）
void reverse_string(char *str){
	int len = strlen(str);
	char temp = *str;
	*str = *(str+len-1);
	*(str+len-1) = '\0';
	if (strlen(str + 1) >= 2){
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
}
////计算一个数的每位之和（递归实现）
//int DigitSum(int n){
//	static int sum = 0;
//	if (n > 9){
//		DigitSum(n / 10);
//	}
//	sum += (n % 10);
//	return sum;
//}
//计算一个数的每位之和（递归实现）
int DigitSum(int n){
	if (n > 9){
		return DigitSum(n / 10)+n%10;
	}
	else{
		return n;
	}
}
//递归实现n的K次方
int Pow(int n, int k){
	if (k != 0){
		return n*Pow(n, k - 1);
	}
	else{
		return 1;
	}
}

int main(){
	int n = 2;
	int k = 3;
	int p = Pow(n, k);
	printf("%d\n", p);
	//int x = 1234;
	//int sum=DigitSum(x);
	//printf("%d\n", sum);
	//char str[20];
	//printf("请输入字符串：");
	//scanf("%s",&str);
	//reverse_string(str);
	//printf("%s\n", str);
	//int n = 0;
	//printf("请输入汉诺塔层数：");
	//scanf("%d", &n);
	//hanio(n, 'a', 'b', 'c');
	system("pause");
	return 0;
}