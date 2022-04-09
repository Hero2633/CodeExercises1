#define _CRT_SECURE_NO_WARNINGS
#include"Sql.h"
int main()
{
	Sheet sheet;
	SeqlistInitializes(&sheet);
	SeqListInit(&sheet,10);
	SeqListInit(&sheet,20);
	SeqListInit(&sheet,30);
	SeqListInit(&sheet, 40);
	SeqListInit(&sheet, 50);
	SeqListInit(&sheet, 60);
	SeqListPushBack(&sheet, 66);
	SeqListPushFront(&sheet, 77);
	SeqListPushFront(&sheet, 88);
	SeqListPopFront(&sheet);
	SeqListPopBack(&sheet);
	SeqListPop(&sheet,2);
	SeqListPuch(&sheet, 2, 99);
	Sheetprintf(&sheet);
	FindElem(&sheet,7);
	exits(&sheet);
	return 0;
}