#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
/*
ʵ��һ�������������ð������(����)
˼·���������飬�����������ڵ�����Ԫ�ؽ��бȽϣ���ǰһ�����ݴ��ں�һ��
����ʱ����������λ���ϵ����ݣ�ֱ�����е����ݱȽ��꣬��ʱ������������
�����������ĩβ������������Ѿ��ź����⣬�������ݻ������򣬶�ʣ������
�������������Ƶķ�ʽ���д����ɡ�
*/
void BubbleSort(int array[], int size){
	for (int i = 0; i < size - 1; i++){
		for (int j = 1; j < size - i; j++){
			if (array[j - 1]>array[j]){
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}

		}
	}
}
/*
�Ż������ĳ��ð�ݽ����������Ѿ������ˣ�����ʣ��Ԫ�ص�ð�ݿ���ʡ��
*/
void BubbleSort1(int array[], int size)
{
	// ���ѭ������ð�����������
	// size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
	for (int i = 0; i < size - 1; ++i)
	{
		int isChange = 0;
		// ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ����
		// �ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				// �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�isChange����Ϊ1
				isChange = 1;
			}
		}

		// �������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
		if (!isChange)
			return;
	}
}
void init(int array[], int size){
	for (int i =0; i <= size; i++){
		array[i] = 0;
	}
}
void print(int array[], int size){
	for (int i = 0; i <= size; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}

void reverse(int array[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left<right)
	{
		int temp = array[left];
		array[left] = array[right];
		array[right] = temp;
		left++;
		right--;
	}
}

void exchange(int array1[], int array2[],int size){
	for (int i = 0; i <= size; i++){
		int temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
}
int main(){
	int x[8] = {11,22,33,44,55,66,77,88};
	int y[8] = {1,2,3,4,5,6,7,8};
	//BubbleSort1(x, 8);
	//init(x, 8);
	//print(x, 8);
	//reverse(x,8);
	exchange(x, y, 8);
	for (int i = 0; i < 8; i++){
		printf("%d ", x[i]);
	}
	printf("\n......................\n");
	for (int i = 0; i < 8; i++){
		printf("%d ", y[i]);
	}
	system("pause");
	return 0;
}