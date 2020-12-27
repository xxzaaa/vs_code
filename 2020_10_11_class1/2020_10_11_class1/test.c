//分支语句和循环语句

#include<stdio.h>
#include<windows.h>
#define _AGE_ 18
#pragma warning(disable:4996)
int main(){
	//在屏幕上打印1—10的数字
	//int i = 1;
	//while (i <= 10){
	//	printf("%d ",i);
	//	i = i + 1;
	//}
	//printf("\n");
	int ch = 0;
	while ((ch = getchar()) != EOF){//C语言中 ctrl + z:输入结束
		putchar(ch);
	}



	system("pause");
	return 0;
	//printf("你多大了？");
	//int age = 0;
	//scanf("%d", &age);
	//if (age < _AGE_){
	//	printf("少年!\n");
	//}
	//else if (age >= 18 && age < 30){
	//	printf("青年!\n");
	//}
	//else if (age >= 30 && age < 50){
	//	printf("中年!\n");
	//}
	//else if (age >= 50 && age < 100){
	//	printf("老年!\n");
	//}
	//else{
	//	printf("牛逼!\n");
	//}

	//判断一个数是否为奇数
	//int x = 0;
	//printf("请输入要判断的数：");
	//scanf("%d", &x);
	//if (x % 2 == 1){
	//	printf("%d是奇数！\n", x);
	//}
	//else{
	//	printf("%d不是奇数！\n",x);
	//}
	//int x = 0;
	//printf("请输入要判断的数：");
	//scanf("%d", &x);
	//if (x & 1){                  //按位与
	//	printf("%d是奇数！\n", x);
	//}
	//else{
	//	printf("%d不是奇数！\n", x);
	//}

	//输出1~100之间的奇数
	//int x = 1;
	//while (x <= 100){
	//	if (x & 1){
	//		printf("%d ", x);
	//	}
	//	x++;
	//}
	//printf("\n");
	//int day = 0;
	//printf("请输入：");
	//scanf("%d", &day);
	//switch (day){
	//case 1:
	//	printf("星期一！\n");
	//	break;
	//case 2:
	//	printf("星期二！\n");
	//	break;
	//case 3:
	//	printf("星期三！\n");
	//	break;
	//case 4:
	//	printf("星期四！\n");
	//	break;
	//case 5:
	//	printf("星期五！\n");
	//	break;
	//case 6:
	//	printf("星期六！\n");
	//	break;
	//case 7:
	//	printf("星期日！\n");
	//	break;
	//default:
	//	printf("请输入1~7!\n");
	//	break;
	//}
	//int day = 0;
	//printf("请输入：");
	//scanf("%d", &day);
	//switch (day){
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("weekday！\n");
	//	break;
	//case 6:
	//case 7:
	//	printf("weekend！\n");
	//	break;
	//default:
	//	printf("请输入1~7!\n");
	//	break;
	//}

}
