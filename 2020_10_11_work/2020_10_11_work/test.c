//将三个数按从大到小输出
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main(){
	//写一个代码打印1 - 100之间所有3的倍数的数字
	int i = 1;
	while(i <= 100){
		if (0 == i % 3){
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	////将三个数按从大到小输出
	//printf("请输入要排序的三个数字：");
	//int x,y,z,t;
	//scanf("%d %d %d", &x, &y, &z);
	//if (x < y){
	//	t = x;
	//	x = y;
	//	y = t;
	//}
	//if (x < z){
	//	t = x;
	//	x = z;
	//	z = t;
	//}
	//if (y < z){
	//	t = y;
	//	y = z;
	//	z = t;
	//}
	//printf("从大到小排序为：%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}
