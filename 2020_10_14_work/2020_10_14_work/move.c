#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
//����ַ��������ƶ������м���
//int main(){
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n",arr2);
//	//whileѭ��ʵ��
//	while (left <= right){
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	//forѭ��ʵ��
//
//	system("pause");
//	return 0;
//}

//ģ���û���¼�龰��ֻ�ܵ�½����
int main(){
	char psw[] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i){
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
			break;
	}
	if (i == 3){
		printf("exit!\n");
	}
	else{
		printf("log in\n");
	}
	system("pause");
	return 0;
}