#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)  
//1:������ 0����������
int IsLeapYear(int year){
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	};
}
//������������
int Exchange(int *a, int *b){
	int *temp=*a;
	*a = *b;
	*b = temp;

}
//��ӡ�˷��ھ���
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
//��ӡһ������ÿһλ(�ݹ�)
int print(unsigned int x){
	if(x > 9){
		print(x / 10);
	}
	printf("%d ", x % 10);
}

int Strlen1(char *str){
	//�ݹ�
	if (*str == '\0'){
		return 0;
	}
	return 1 + Strlen1(str + 1);
}
int Strlen2(char *str){
	//�ǵݹ�
	char *start = str;
	int count = 0;
	while (*start != '\0'){
		count++;
		*start++;
	}
	return count;
}
int fac1(int n){
	//�ݹ�
	if (n <= 1){
		return 1;
	}
	return n*fac1(n - 1);
}
int fac2(int n){
	//�ǵݹ�
	int fac = 1;
	for (int i = 2; i <= n; i++){
		fac *= i;
	}
	return fac;
}

int main(){
	int n = 0;
	printf("������һ��������n:");
	scanf("%d", &n);
	printf("%d�Ľ׳���%d.\n", n, fac1(n));
	printf("%d�Ľ׳���%d.\n", n, fac2(n));
	//char *x = "abcdefg";
	//printf("�ַ�������Ϊ��%d\n",Strlen1(x));
	//printf("�ַ�������Ϊ��%d\n",Strlen2(x));
	//int x = 1234;
	//print(x);
	//int x = 12;
	//Mult(12);
	//int x = 1;
	//int y = 2;
	//Exchange(&x, &y);
	//printf("%d %d\n", x, y);
	//int year = 0;
	//printf("������Ҫ�жϵ���ݣ�");
	//scanf("%d", &year);
	//if (IsLeapYear(year)){
	//	printf("%d�������ꡣ", year);
	//}
	//else{
	//	printf("%d�겻�����ꡣ", year);
	//}
	system("pause");
	return 0;
}