
#include "contact.h"
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
static void Menu(){
	printf("\t\t\t#################################\n");
	printf("\t\t\t##  1. Add             2. Del  ##\n");
	printf("\t\t\t##  3. Search          4. Mod  ##\n");
	printf("\t\t\t##  5. Show            6. Cls  ##\n");
	printf("\t\t\t##  7. Sort            0. Quit ##\n");
	printf("\t\t\t#################################\n");
	printf("Please select:> ");
}
int main()
{
	contact_t ct;
	memset(&ct, 0, sizeof(ct));//清空
	ct.cap = TOTAL;
	int quit = 0;
	int select = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			AddPerson(&ct);
			break;
		case 2:
			DeletePerson(&ct);
			break;
		case 3:
			SearchPerson(&ct);
			break;
		case 4:
			ModPerson(&ct);
			break;
		case 5:
			ShowContact(&ct,-1);
			break;
		case 6:
			ClsContact(&ct);
			break;
		case 7:
			SortContact(&ct);
			break;
		default:
			quit = 1;
			break;
		}
	}
	system("pause");
	return 0;
}
