////��һ�����������в��Ҿ����ĳ������n
////��дint binsearch(int x,int v[],int n);
////���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x;
//#include<stdio.h>
//#include<windows.h>
////���������������
//int BinSearch(int arr[], int num, int x){
//	int left = 0;
//	int right = num-1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (x > arr[mid]){
//			left = mid+1;
//		}
//		else if(x < arr[mid]){
//			right = mid-1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(){
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int who = 888;
//	int index = BinSearch(arr, num, who);
//	printf("index = %d\n", index);
//	system("pause");
//	return 0;
//}

//��д���룬��ʾ����ַ����������ƶ������м���
//hello bit,hello china!
//######################
//h####################!
//he##################a!
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//�س�������
//\r:�س�����������õ������
//\n:�س��뻻��
//void Show(){
//	//const char *str = "hello bit,hello china!";
//	char str[] = "hello bit,hello china!";
//	char label[] = "############# #########";
//	int left = 0;
//	int right = strlen(str)-1;
//	//printf("%s\n", label);
//	for (;left <= right;left++,right--){
//		label[left] = str[left];
//		label[right] = str[right];
//		printf("%s\r", label);
//		Sleep(1000);
//	}
//	printf("\n");
//}
//int main(){
//
//	Show();
//	system("pause");
//	return 0;
//}


//int main(){
//	Show();
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//



#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#define NAME "tom"
#define PASSWD "12345"
//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼һ�Ρ�
//ֻ���������������룬���������ȷ����ʾ��¼�ɹ���
//������ξ�����������˳�����
//����ʱ
void Countdown(){
	int count = 5;
	while (count >= 0){
		printf("%d\r", count);
		count--;
		Sleep(1000);
	}
}
//�����й����ʾ
void Load(){
	char label[] = { '|', '/', '-', '\\' };
	int num = sizeof(label) / sizeof(label[0]);
	int i = 0;
	while (1){
		printf("%c\r", label[i]);
		i++;
		i %= num;
		Sleep(100);
	}
}
int main(){
	char name[64];
	char passwd[64];
	int time = 3;
	while (1 ){
		printf("�������˺�#");
		scanf("%s", name);
		printf("����������#");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
			break;
		}
		else{
			printf("������˼����½ʧ�ܣ�\n");
			time--; 
			printf("�㻹��%d�λ��ᣡ\n", time);
			if (time == 0){
				printf("�����Ѿ����꣬��%dS֮�����ԣ�\n",5);
				Countdown();
				time = 3;
			}
		}
	
	}
	if (time > 0){
		printf("��½�ɹ���\n");
	}
	else{
		printf("������˼����¼ʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}

