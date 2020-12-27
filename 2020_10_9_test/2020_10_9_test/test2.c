# include<stdio.h>
//全局变量可以跨文件使用（需要声明）
//static修饰全局变量，该变量只能在本文件内使用
int g_val = 1234;
//函数也可以跨文件访问
//static修饰函数，该函数只能在本文件内部被使用
void show(){
	printf("hello bit!");

}