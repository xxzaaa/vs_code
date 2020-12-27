#include<stdio.h>
#include<windows.h>
int Strlen(char *str){
	//递归
	if (*str == '\0'){
		return 0;
	}
	return 1 + Strlen(str + 1);
	//非递归
	//char *start = str;
	//int count = 0;
	//while (*start != '\0'){
	//	count++;
	//	*start++;
	//}
	//return count;
}
//接受一个无符号整形值，按照顺序打印它的每一位。
void ShowNumbers(unsigned int x){
	if (x > 9){
		ShowNumbers(x/10);
	}
	//1.if条件不满足||2.ShowNumbers执行完毕，已经返回
	printf("%d ", x % 10);

}
//求n的阶乘(不考虑溢出)(递归)
int factorial(int n){
	if(n <= 1){
		return 1;
	}
	else{
		return n*factorial(n - 1);
	}
}
//求第n个斐波那契数(不考虑溢出)(递归)
int fib(int n){
	if (n == 2||n==1){
		return 1;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}
}
//求第n个斐波那契数(不考虑溢出)(迭代)
int fib2(int n){
	int first = 1;
	int second = 1;
	int third = 1;
	while (n>2){
		third = first + second;
		first = second;
		second = third;
		n--;
	}
	return third;
}
int main(){
	int result = fib2(10);
	int result2 = fib2(10);
	printf("%d\n%d\n", result,result2);
	//int result = factorial(5);
	//printf("%d\n", result);

	//char *p = "abcdef";
	//int len = Strlen(p);
	//printf("%d\n", len);

	//int num = 1234;
	//ShowNumbers(num);

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//printf("%p %p %p\n", &a, &b, &c);
	system("pause");
	return 0;
}