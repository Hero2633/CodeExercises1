#define _CRT_SECURE_NO_WARNINGS
#include"标头.h"
void Add_people(book* pf)
{
	if (pf->sz == pf->ad)
	{
		people*t = (people*)realloc(pf->date,sizeof(people)*(pf->ad + 1));
		if (t == NULL)
		{
			perror("Add_people");
			return;

		}
		else
		{
			pf->date = t;
			pf->ad = pf->ad + 1;
			printf("增容成功\n");
		}
	}
	printf("姓名:");
	scanf("%s", pf->date[pf->sz].name);
	printf("学号:");
	scanf("%s", pf->date[pf->sz].num);
	printf("性别:");
	scanf("%s", pf->date[pf->sz].sex);
	printf("地址:");
	scanf("%s", pf->date[pf->sz].addres);
	printf("年龄:");
	scanf("%d", &pf->date[pf->sz].age);
	pf->sz++;

}
void outputt(book* pf)
{
	int i = 0;
	printf("%-20s\t%-20s\t%-10s\t%-20s\t%-10s\n", "姓名", "学号", "性别", "地址", "年龄");
	for (i = 0; i < pf->sz; i++)
	{

		printf("%-20s\t%-20s\t%-10s\t%-20s\t%-2d\n", pf->date[i].name, pf->date[i].num, pf->date[i].sex, pf->date[i].addres, pf->date[i].age);
	}

}
void delete(book* pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = { 0 };
	printf("请输入你删除的人的名字:");
	scanf("%s", ch);
	printf("为避免误操作，请输入你删除的人的学号:");
	scanf("%s", nums);
	for (int i = 0; i < pf->sz; i++)
	{
		if ((strcmp(ch, pf->date[i].name) == 0) && (strcmp(nums, pf->date[i].num) == 0))
		{
			for (int j = i; j < pf->sz; j++)
			{
				pf->date[j] = pf->date[j + 1];
				k = 1;
			}
		}
		if (k == 1)
			break;
	}
	if (k == 1)
	{
		people* t = (people*)realloc(pf->date, sizeof(people) *(pf->ad-1));
		if (t == NULL)
		{
			perror("delete");
			return;

		}
		else
		{
			pf->sz--;
			pf->date = t;
			pf->ad--;
			printf("减容成功\n");
		}
		printf("\n**********删除成功***********\a\a\a\n");
	}
	else
	{
		printf("\n********没有找到你想要删除的人********\a\a\n");
	}
	 outputt(pf);
}
void About()
{
	printf("\n作者:比特科技\n年级:大一\n版本:处于低级水平（动态版）\n缺点:1.效率太低，一次性只能存一个\n   2.不够灵活，会导致大量内存被浪费\n  3.有不足的地方，欢迎大家提出宝贵意见\n");

}
void Find(const book* pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = { 0 };
	printf("请输入你查找的人的名字:");
	scanf("%s", ch);
	printf("为精确操作，请输入你查找的人的学号:");
	scanf("%s", nums);
	for (int i = 0; i < pf->sz; i++)
	{
		if (strcmp(ch, pf->date[i].name) == 0 && strcmp(nums, pf->date[i].num) == 0)
		{
			printf("%-20s\t%-20s\t%-10s\t%-20s\t%-10s\n", "姓名", "学号", "性别", "地址", "年龄");
			printf("%-20s\t%-20s\t%-10s\t%-20s\t%-2d\n", pf->date[i].name, pf->date[i].num, pf->date[i].sex, pf->date[i].addres, pf->date[i].age);
			k = 1;
			break;
		}

	}
	if (k == 0)
		printf("\n*****查找失败*****\n");
	else
		printf("\n*****查找成功*****\n\n");

}
void Amend(book* pf)
{
	int k = 0;
	char nums[20] = { 0 };
	char ch[20] = { 0 };
	printf("请输入你修改的人的名字:");
	scanf("%s", ch);
	printf("为避免误操作，请输入你修改的人的学号:");
	scanf("%s", nums);
	for (int i = 0; i < pf->sz; i++)
	{
		if (strcmp(ch, pf->date[i].name) == 0 && strcmp(nums, pf->date[i].num) == 0)
		{
			printf("姓名:");
			scanf("%s", pf->date[i].name);
			printf("学号:");
			scanf("%s", pf->date[i].num);
			printf("性别:");
			scanf("%s", pf->date[i].sex);
			printf("地址:");
			scanf("%s", pf->date[i].addres);
			printf("年龄:");
			scanf("%d", &pf->date[i].age);
			k = 1;
			break;
		}

	}
	if (k == 0)
		printf("\n*****修改失败*****\n");
	else
		printf("\n*****修改成功*****\n");
	outputt(pf);
}
void exits(book* pf)
{
	free(pf->date);
	pf->date = NULL;
	pf->sz = 0;
	pf->ad = 0;
}