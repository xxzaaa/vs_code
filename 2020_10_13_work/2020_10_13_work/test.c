#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#define NUM 10
//yes:1,no:0
int IsPrimeNumber(int n){
	for (int i = 2; i < n/2; i++){
		if (n%i == 0){
			return 0;
		}	
	}
	return 1;
}
int IsLeapYear(){

}

int main(){
	//9*9乘法口诀表
	/*int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= 9; j++){
			if (j >= i){
				printf("%d*%d=%d\t", i, j, i*j);
			}
		}
		printf("\n");
	}*/
	////求10个整数中的最大值
	//int str[NUM] = {0};
	//printf("请输入十个整数：");
	//for (int i = 0; i < NUM; i++){
	//	scanf("%d", &str[i]);
	//}
	//int  max= str[0];
	//for (int i = 0; i < NUM; i++){
	//	if (str[i]>max){
	//		max= str[i];
	//	}
	//}
	//printf("最大值为：%d\n", max);
	////1-100的所有整数中出现多少个数字9
	//int count = 0;
	//for (int i = 1; i <= 100; i++){
	//	if (i % 10 == 9){
	//		count++;
	//		printf("%d ", i);
	//	}
	//	if (i/10==9){
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("1-100之间的所有整数中一共出现%d个数字9.\n", count);
	////打印1000-2000之间的闰年
	//for (int i = 1000; i <= 2000; i++){
	//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
	//		printf("%d\n", i);
	//	}
	//}
	////Stein算法
	//int a = 0;
	//int b = 0;
	//printf("请输入两个整数:");
	//scanf("%d%d", &a, &b);
	//int gcd = 0;
	//int k = 1;
	//while ((!(a & 1)) && (!(b & 1))){       //step1;
	//	k <<= 1;                            //用k记录全部公因子2的乘积 ；
	//	a >>= 1;
	//	b >>= 1;
	//}
	//while (!(a & 1))a >>= 1;                //step2;
	//while (!(b & 1))b >>= 1;
	//if (a<b) a ^= b, b ^= a, a ^= b;        //交换，使a为较大数； 
	//while (a != b){                         //step3;
	//	a -= b;
	//	if (a<b) a ^= b, b ^= a, a ^= b;
	//}
	//gcd = k*a;
	//printf("最大公约数为：%d\n", gcd);
	////更像减损法
	//int a = 0;
	//int b = 0;
	//printf("请输出两个整数:");
	//scanf("%d%d", &a, &b);
	//while ((a - b)!=0){
	//	if (a > b){
	//		a = a - b;
	//	}
	//	else{
	//		b = b - a;
	//	}
	//}
	//printf("最大公约数为：%d\n", b);
	////暴力穷举法
	//int a = 0;
	//int b = 0;
	//printf("请输入两个整数:");
	//scanf("%d%d", &a, &b);
	//if (a >= b){
	//	int i = 0;
	//	for (i = b; i >= 1; i--){
	//		if (a%i == 0 && b%i == 0){
	//			printf("最大公约数为：%d\n", i);
	//			break;
	//		}
	//	}
	//}
	//else{
	//	int j = 0;
	//	for (j = a; j >= 1; j--){
	//		if (a%j == 0 && b%j == 0){
	//			printf("最大公约数为：%d\n", j);
	//			break;
	//		}
	//	}
	//}
	////辗转相除法
	//int a = 0;
	//int b = 0;
	//printf("请输入两个整数:");
	//scanf("%d%d", &a, &b);
	//if (a >= b){
	//	int c = a%b;
	//	while (c != 0){
	//		a = b;
	//		b = c;
	//		c = a%b;
	//	}
	//	printf("最大公约数为：%d\n",b);
	//}
	//else{
	//	int d = b%a;
	//	while (d != 0){
	//		b = a;
	//		a = d;
	//		d = b%a;
	//	}
	//	printf("最大公约数为：%d\n", a);
	//}

	////计算1/1-1/2+1/3-1/4+1/5+...+1/99-1/100的值，打印出结果
	//double sum = 0.0;
	//int flag = 1;
	//for (int i = 1; i <= 100; i++){
	//	sum += (1.0 / i)*flag;
	//	flag = -flag;
	//}
	//printf("%lf\n", sum);
	//打印素数：打印100~200之间的素数
	for (int i = 100; i <= 200; i++){
		if (IsPrimeNumber(i)){
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

