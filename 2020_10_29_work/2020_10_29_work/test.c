#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
/*
实现一个对整型数组的冒泡排序。(升序)
思路：遍历数组，对数组中相邻的两个元素进行比较，当前一个数据大于后一个
数据时，交换两个位置上的数据，直到所有的数据比较完，此时，最大的数据已
经放在数组的末尾。除最大数据已经排好序外，其余数据还是无序，对剩余数据
采用与上述类似的方式进行处理即可。
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
优化：如果某次冒泡结束后，序列已经有序了，后面剩余元素的冒泡可以省略
*/
void BubbleSort1(int array[], int size)
{
	// 外层循环控制冒泡排序的趟数
	// size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
	for (int i = 0; i < size - 1; ++i)
	{
		int isChange = 0;
		// 具体冒泡的方式：用相邻的两个元素进行比较，前一个大
		// 于后一个元素时，交换着两个数据，依次直到数组的末尾
		for (int j = 1; j < size - i; ++j)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				// 如果本次冒泡进行数据交换了，说明本次还是无序的，就将isChange设置为1
				isChange = 1;
			}
		}

		// 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
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