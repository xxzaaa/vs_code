#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main(){
	char arr[3][4];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	//char arr[6] = "abcde";
	//printf("%d\n", sizeof(arr));
	//int arr1[5];
	//char arr2[7];
	//for (int i = 0; i <= 6; i++){
	//	printf("&arr2[%d] = %p\n",i, &arr2[i]);
	//}
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//printf("&a = %p\n", &a);
	//printf("&b = %p\n", &b);
	//printf("&c = %p\n", &c);
	//double arr3[9];
	system("pause");
	return 0;
}