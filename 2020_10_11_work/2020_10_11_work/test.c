//�����������Ӵ�С���
#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main(){
	//дһ�������ӡ1 - 100֮������3�ı���������
	int i = 1;
	while(i <= 100){
		if (0 == i % 3){
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	////�����������Ӵ�С���
	//printf("������Ҫ������������֣�");
	//int x,y,z,t;
	//scanf("%d %d %d", &x, &y, &z);
	//if (x < y){
	//	t = x;
	//	x = y;
	//	y = t;
	//}
	//if (x < z){
	//	t = x;
	//	x = z;
	//	z = t;
	//}
	//if (y < z){
	//	t = y;
	//	y = z;
	//	z = t;
	//}
	//printf("�Ӵ�С����Ϊ��%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}
