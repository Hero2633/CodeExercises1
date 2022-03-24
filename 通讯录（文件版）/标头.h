#pragma once
#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define Max_name 20
#define Max_sex 10
#define Max_addres 20
#define Max_num 20
enum win
{
	Exit,
	Add,
	backspace,
	find,
	amend,
	output,
	about,
};

typedef struct people//个人基本信息；
{
	char name[Max_name];
	char num[Max_num];
	char sex[Max_sex];
	char addres[Max_addres];
	int age;
}people;
typedef struct book
{
	people* date;//用于接收开辟的动态空间
	int sz;//用于表示存放的联系人个数；
	int ad;//增容的数量
}book;
void Add_people(struct book* pf);//用来增加联系人的函数；
void outputt(book* pf);//用来打印通讯录；
void delete(book* pf);//删除联系人；
void About();//关于作者；
void Find(const book* pf);//查找联系人
void Amend(book* pf); //修改联系人
void exits(book* pf);//释放内存
void save(book*pf);//保存数据
