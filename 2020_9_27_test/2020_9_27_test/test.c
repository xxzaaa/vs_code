#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{

	char str1[16] = "bit";
	char str2[16] = { 'b', 'i', 't' };
	char str3[16] = { 'b', 'i', 't','\0' };

	printf("%s%\n", str1);
	printf("%s%\n", str2);
	printf("%s%\n", str3);

	printf("%d\n", sizeof(str1));
	printf("c%\n", '\a');

	printf("\'\n");
	printf("\"\n");

	//"hello bit!";


	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));//\32被解析成一个转义字符
	printf("...................\n");
	printf("%d\n", strlen("\c"));  //1
	printf("%d\n", sizeof("\c"));  //2

	int i = 1;
	while (i <= 10)
	{
		printf("i:%d\n", i);
		i = i + 1;
		Sleep(100);
	}
	system("pause");
	return 0;
	system("pause");
	return 0;
}