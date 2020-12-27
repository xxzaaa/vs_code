////在一个有序数字中查找具体的某个数字n
////编写int binsearch(int x,int v[],int n);
////功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x;
//#include<stdio.h>
//#include<windows.h>
////假设数据是升序的
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

//编写代码，演示多个字符串从两端移动，向中间汇聚
//hello bit,hello china!
//######################
//h####################!
//he##################a!
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//回车，换行
//\r:回车，将光标设置到最左侧
//\n:回车与换行
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
//编写代码实现，模拟用户登录场景，并且只能登录一次。
//只允许输入三次密码，如果密码正确则提示登录成功）
//如果三次均输入错误，则退出程序。
//倒计时
void Countdown(){
	int count = 5;
	while (count >= 0){
		printf("%d\r", count);
		count--;
		Sleep(1000);
	}
}
//加载中光标显示
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
		printf("请输入账号#");
		scanf("%s", name);
		printf("请输入密码#");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0){
			break;
		}
		else{
			printf("不好意思，登陆失败！\n");
			time--; 
			printf("你还有%d次机会！\n", time);
			if (time == 0){
				printf("机会已经用完，请%dS之后再试！\n",5);
				Countdown();
				time = 3;
			}
		}
	
	}
	if (time > 0){
		printf("登陆成功！\n");
	}
	else{
		printf("不好意思，登录失败！\n");
	}
	system("pause");
	return 0;
}

