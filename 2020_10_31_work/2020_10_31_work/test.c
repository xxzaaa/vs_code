#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//求两个数二进制中不同位的个数
int calc_diff_bit(int m, int n){
	int temp = m^n;
	int count = 0;
	while (temp){
		temp = temp&(temp - 1);
		count++;
	}
	return count;
}
//打印整数二进制的奇数位和偶数位
void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}

// 统计二进制中1的个数
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
			count++;
		n = n / 2;
	}
	return count;
}

int main()
{
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	//int num = 15; // 0000 0000 0000 0000 0000 0000 0000 1010
	//printf("%d\n",count_one_bit(num));
	//int m, n;
	//scanf("%d %d", &m, &n);
	//printf("%d\n", calc_diff_bit(m, n));
	system("pause");
	return 0;
}