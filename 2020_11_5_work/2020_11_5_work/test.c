#include<stdio.h>
#include<windows.h>
/*ʹ��ָ���ӡ��������:дһ��������ӡarr��������ݣ�
��ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣*/
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
