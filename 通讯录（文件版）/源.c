#define _CRT_SECURE_NO_WARNINGS
#include"标头.h"
void mean()
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("     ----------------\n");
	printf("     +              +\n");
	printf("     |通讯录管理系统|\n");//
	printf("     |0-退出出系统  |\n");//
	printf("     |1-增加联系人  |\n");//
	printf("     |2-删除联系人  |\n");//
	printf("     |3-查找联系人  |\n");//
	printf("     |4-修改联系人  |\n");//
	printf("     |5-输出联系人  |\n");//
    printf("     |6-关于作者    |\n");//
	printf("     +              +\n");
	printf("     ----------------\n");//

}
int main()
{
	int input = 0;

	book books;
	people* str = (people*)malloc(sizeof(people));
	if (str == NULL)
	{
		perror("main");
		return 0;
	}
	else
	{
		(&books)->date = str;
		(&books)->sz = 0;
		(&books)->ad = 1;

	}
	FILE* pt = fopen("books.txt", "r");
	if (pt == NULL)
	{
		perror("main");
		return 0;
	}
	else
	{
		people s = { 0 };
		people* ps=&s;
		while (fread(ps, sizeof(people), 1, pt))
		{
			if ((&books)->sz == (&books)->ad)
			{
				people* t = (people*)realloc((&books)->date, sizeof(people) * ((&books)->ad + 1));
				if (t == NULL)
				{
					perror("main");
					return;

				}
				else
				{
					(&books)->date = t;
					(&books)->ad = (&books)->ad + 1;
					printf("增容成功\n");
				}
			}
			
			(&books)->date[(&books)->sz] = *ps;
			(&books)->sz++;
		}

		fclose(pt);
		pt = NULL;
	}
	
	do {

		mean();

		printf("请输入你想输入的选项>");
		scanf("%d", &input);
		switch (input)
		{
		case Exit:
			save(&books);
			exits(&books);
			system("cls");
			printf("\n退出系统\n");
			break;
		case Add:system("cls");
			Add_people(&books);;
			break;
		case backspace:system("cls");
			delete(&books);
			break;
		case find:system("cls");
			Find(&books);
			break;
		case amend:system("cls");
			Amend(&books);
			break;
		case output:system("cls");
			outputt(&books);
			break;
		case about:
			system("cls");
			About();
			break;
		default:system("cls");
			break;
		}

	} while (input);
	return 0;

}