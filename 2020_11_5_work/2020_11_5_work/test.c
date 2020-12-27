#include<stdio.h>
#include<windows.h>
/*使用指针打印数组内容:写一个函数打印arr数组的内容，
不使用数组下标，使用指针。arr是一个整形一维数组。*/
void PrintArr(int *arr, int size){
	for (int i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}
}
//void PrintArr(int *arr, int size){
//	for (int i = 0; i < size; i++){
//		printf("%d ", *arr);
//		++arr;
//	}
//}
int main(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = sizeof(a) / sizeof(a[0]);
	PrintArr(a, size);
	system("pause");
	return 0;
}
