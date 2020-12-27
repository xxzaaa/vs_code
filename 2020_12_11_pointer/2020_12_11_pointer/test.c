#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
long add(long a, long b)
{
	return (long)(&((char *)a)[b]);
}
int main()
{
	int x;
	int y;
	scanf("%d%d", &x, &y);
	printf("%d+%d=%ld\n", x, y, add(x, y));
	system("pause");
	return 0;
}
//#include<stdio.h>
//#include<windows.h>
////模拟实现strcat
//char* my_strcat(char *dest, const char* src){
//	char *ret = dest;
//	while (*dest){
//		dest++;
//	}
//	while ((*dest++ = *src++)){
//		;
//	}
//	return ret;
//}
////模拟实现strcpy
//char* my_strcpy(char *dest, const char* src){
//	char *ret = dest;
//	while ((*dest++ = *src++)){
//		;
//	}
//	return ret;
//}
//
//int main(){
//	char a[20] = "abcd";
//	char b[] = "defghij";
//	my_strcpy(a, b);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
////int checkData(int *p)
////{
////	int tmp[7] = { 0 }; 
////	for (int i = 0; i < 5; i++)
////	{
////		if (tmp[p[i]]) 
////		{
////			return 0;
////		}
////		tmp[p[i]] = 1; 
////	}
////	return 1; 
////}
////
////int main()
////{
////	int p[5]; 
////	for (p[0] = 1; p[0] <= 5; p[0]++)
////	{
////		for (p[1] = 1; p[1] <= 5; p[1]++)
////		{
////			for (p[2] = 1; p[2] <= 5; p[2]++)
////			{
////				for (p[3] = 1; p[3] <= 5; p[3]++)
////				{
////					for (p[4] = 1; p[4] <= 5; p[4]++) 
////					{
////						if ((p[1] == 2) + (p[0] == 3) == 1 && 
////							(p[1] == 2) + (p[4] == 4) == 1 && 
////							(p[2] == 1) + (p[3] == 2) == 1 && 
////							(p[2] == 5) + (p[3] == 3) == 1 && 
////							(p[4] == 4) + (p[0] == 1) == 1 && 
////							checkData(p))
////						{
////							for (int i = 0; i < 5; i++)
////							{
////								printf("%d ", p[i]);
////							}
////							printf("\n");
////						}
////					}
////				}
////			}
////		}
////	}
////	system("pause");
////	return 0;
////}
//////猜凶手
////int main(){
////	int x[4] = { 0 };
////	int i;
////	for (i = 0; i < 4; i++){
////		x[i] = 1;
////		if ((x[0] != 1) + (x[2] == 1) +
////			(x[3] == 1) + (x[3] != 1) == 3)
////		{
////			break;
////		}
////		x[i] = 0;
////	}
////	printf("凶手是%c\n", 'A' + i);
////	system("pause");
////	return 0;
////}
//
//
//////打印杨辉三角
////int main(){
////	int n = 5;//行数
////	int data[30][30] = { 1 }; //第一行直接填好，播下种子
////	int i, j;
////	for (i = 1; i < n; i++) //从第二行开始填
////	{
////		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
////		for (j = 1; j <= i; j++) //从第二列开始填
////		{
////			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
////		}
////	}
////	for (i = 0; i < n; i++) //填完打印
////	{
////		for (j = 0; j <= i; j++)
////		{
////			printf("%d ", data[i][j]);
////		}
////		printf("\n");
////	}
////	system("pause");
////	return 0;
////}
//
//////调整数组使奇数全部都位于偶数前面
////void swap_arr(int arr[], int size){
////	int left = 0;
////	int right = size - 1;
////	int tmp = 0;
////	while (left < right){
////		while ((left < right) && (arr[left] % 2 == 1)){
////			left++;
////		}
////		while ((left < right) && (arr[right] % 2 == 0)){
////			right--;
////		}
////		if (left < right){
////			//tmp = arr[right];
////			//arr[right] = arr[left];
////			//arr[left] = tmp;
////			arr[left] = arr[left] ^ arr[right];
////			arr[right] = arr[left] ^ arr[right];
////			arr[left] = arr[left] ^ arr[right];
////		}
////	}
////}
////int main(){
////	int  a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int size = sizeof(a)/sizeof(a[0]);
////	swap_arr(a, size);
////	for (int i = 0; i < size; i++){
////		printf("%d ", a[i]);
////	}
////	printf("\n");
////	system("pause");
////	return 0;
////}
////int main(){
////	int i = 0;
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	for (i = 0; i <= 12; i++)
////	{
////		arr[i] = 0;
////		printf("hello bit\n");
////	}
////	system("pause");
////	return 0;
////}
//
//////模拟实现库函数strcpy
////char * my_strcpy(char* dst, const char* src){
////	char* cp = dst;
////	while (*cp++ = *src++);
////	return(dst);
////}
//
//
//
////int main(){
////	char str1[] = "hello bit.";
////	char str2[] = "hello bit.";
////	char *str3 = "hello bit.";
////	char *str4 = "hello bit.";
////	if (str1==str2)
////		printf("str1 and str2 are same.\n");
////	else
////		printf("str1 and str2 are not same.\n");
////	if (str3 == str4)
////		printf("str3 and str4 are same.\n");
////	else
////		printf("str3 and str4 are not same.\n");
////	system("pause");
////	return 0;
////}
//
//
//
//
//
////int main(){
////	char *pstr = "hello bit";
////	printf("%s\n", pstr);
////	system("pause");
////	return 0;
////}
//
////int main(){
////	char ch = 'w';
////	char *pc = &ch;
////	printf(" %c\n", ch);
////	*pc = 'x';
////	printf(" %c\n", ch);
////	system("pause");
////	return 0;
////}
//
////int main(){
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	int *p = arr;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (int i = 0; i < sz; i++)
////	{
////		printf("&arr[%d]=%p   <======>   p+%d=%p\n", i, &arr[i], i, p + i);
////	}
////	system("pause");
////	return 0;
////}
//
////int main(){
////	int n = 0x11223344;
////	char *pc = (char*)&n;
////	int *pi = &n;
////	*pc = 0;
////	*pi = 0;
////	system("pause");
////	return 0;
////}
//
////int main(){
////	int n = 10;
////	char *pc = (char*)&n;
////	int *pi = &n;
////	printf("%p\n", &n);
////	printf("%p\n", pc);
////	printf("%p\n", pc + 1);
////	printf("%p\n", pi);
////	printf("%p\n", pi + 1);
////	system("pause");
////	return 0;
////}