#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
void hanio(int n, char a, char b, char c){//��n�����Ӵ�a��c��bΪ����
	if (n == 1){
		printf("%c-->%c\t", a, c);//ֻ��һ�����ӣ�ֱ�Ӵ�a�ᵽc
	}
	else{
		hanio(n - 1, a, c, b);//�Ƚ�a������(����������)��n-1�����ӣ��ᵽb��cΪ����
		printf("%c-->%c\t", a, c);//�ٰ����һ�����Ӵ�a�ᵽc
		hanio(n - 1, b, a, c);//����֮��n-1�����Ӱᵽ��b����b��ʼ��Ϊ��ʼ����aΪ����������n-1�����Ӵ�b�ᵽc
	}
}
//�ַ�������ѭ��ʵ�֣�
void reverse_string1(char *str){
	char *left = str;
	char *right = str + strlen(str - 1);
	while (left < right){
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
//�ַ������򣨵ݹ�ʵ�֣�
void reverse_string(char *str){
	int len = strlen(str);
	char temp = *str;
	*str = *(str+len-1);
	*(str+len-1) = '\0';
	if (strlen(str + 1) >= 2){
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
}
////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int DigitSum(int n){
//	static int sum = 0;
//	if (n > 9){
//		DigitSum(n / 10);
//	}
//	sum += (n % 10);
//	return sum;
//}
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
int DigitSum(int n){
	if (n > 9){
		return DigitSum(n / 10)+n%10;
	}
	else{
		return n;
	}
}
//�ݹ�ʵ��n��K�η�
int Pow(int n, int k){
	if (k != 0){
		return n*Pow(n, k - 1);
	}
	else{
		return 1;
	}
}

int main(){
	int n = 2;
	int k = 3;
	int p = Pow(n, k);
	printf("%d\n", p);
	//int x = 1234;
	//int sum=DigitSum(x);
	//printf("%d\n", sum);
	//char str[20];
	//printf("�������ַ�����");
	//scanf("%s",&str);
	//reverse_string(str);
	//printf("%s\n", str);
	//int n = 0;
	//printf("�����뺺ŵ��������");
	//scanf("%d", &n);
	//hanio(n, 'a', 'b', 'c');
	system("pause");
	return 0;
}