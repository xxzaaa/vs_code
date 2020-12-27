#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main(){
	FILE* fp = fopen("text.txt", "r");
	if (NULL == fp){
		printf("fopen error!\n");
		return 1;				//打开失败
	}
	int a = 10;
	char str[64];
	int d = 20;
	fscanf(fp, "%d %s %d", &a, &str, &d);
	fclose(fp);//关闭文件  
	system("pause");
	return 0;
}

//int main(){
//	FILE* fp = fopen("text.txt", "w");
//	if (NULL == fp){
//		printf("fopen error!\n");
//		return 1;				//打开失败
//	}
//	int a = 10;
//	const char *str = "hello bit";
//	double f = 3.14;
//	fprintf(fp, "%d|%s|%f\n", a, str, f);
//	fclose(fp);//关闭文件  
//	system("pause");
//	return 0;
//}

//int main(){
//	FILE* fp = fopen("text.txt", "r");
//	if (NULL == fp){
//		printf("fopen error!\n");
//		return 1;				//打开失败
//	}
//	char *res = NULL;
//	char buffer[64];
//	do{
//		res = fgets(buffer, sizeof(buffer), fp);
//		if (NULL == res){
//			break;
//		}
//		printf("%s", buffer);
//	} while (1);
//	printf("end of file!\n"); 
//	fclose(fp);//关闭文件  
//	system("pause");
//	return 0;
//}

//int main(){
//	FILE* fp = fopen("text.txt", "r");
//	if (NULL == fp){
//		printf("fopen error!\n");
//		return 1;				//打开失败
//	}
//	//fputs("zyp", fp);
//	char c = 'A';
//	while ((c = fgetc(fp) )!= EOF){
//		printf("%c ", c);
//	}
//	printf("end of file!"); 
//	fclose(fp);//关闭文件  
//	system("pause");
//	return 0;
//}

//int main(){
//	fputs("Hello World!\n", stdout);
//	system("pause");
//	return 0;
//}