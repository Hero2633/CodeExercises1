#define _CRT_SECURE_NO_WARNINGS
#include"address book.h"
void mean()
{
	printf("*****   通讯录管理系统   *****\n");//
	printf("*****   0-退出出系统	 *****\n");//
	printf("*****   1-增加联系人	 *****\n");//
	printf("*****	2-删除联系人	 *****\n");//
	printf("*****	3-查找联系人	 *****\n");
	printf("*****	4-修改联系人	 *****\n");//
	printf("*****	5-输出联系人	 *****\n");//
    printf("*****	6-关于作者	 *****\n");
	printf("******************************\n");

}
int main()
{
	int input = 0;
	
	book books = {0};
	do {
		
		mean();
		/*system("cls");*/
		printf("请输入你想输入的选项>");
		scanf("%d", &input);
		switch (input)
		{case Exit:
			printf("\n退出系统\n");
			break;
		case Add:
			Add_people(&books);;
			break;
		case backspace:
			delete(&books);
			break;
		case find:
			Find(&books);
			break;
		case amend:
			Amend(&books);
			break;
		case output:outputt(&books);
			break;
		case about:
			About(); ;
			break;
		default :
			break;
		}
		
	} while (input);
	return 0;

}