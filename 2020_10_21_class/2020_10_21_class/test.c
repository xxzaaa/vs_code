#include<stdio.h>
#include<windows.h>
int Strlen(char *str){
	//�ݹ�
	if (*str == '\0'){
		return 0;
	}
	return 1 + Strlen(str + 1);
	//�ǵݹ�
	//char *start = str;
	//int count = 0;
	//while (*start != '\0'){
	//	count++;
	//	*start++;
	//}
	//return count;
}
//����һ���޷�������ֵ������˳���ӡ����ÿһλ��
void ShowNumbers(unsigned int x){
	if (x > 9){
		ShowNumbers(x/10);
	}
	//1.if����������||2.ShowNumbersִ����ϣ��Ѿ�����
	printf("%d ", x % 10);

}
//��n�Ľ׳�(���������)(�ݹ�)
int factorial(int n){
	if(n <= 1){
		return 1;
	}
	else{
		return n*factorial(n - 1);
	}
}
//���n��쳲�������(���������)(�ݹ�)
int fib(int n){
	if (n == 2||n==1){
		return 1;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}
}
//���n��쳲�������(���������)(����)
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