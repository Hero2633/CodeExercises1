#define _CRT_SECURE_NO_WARNINGS
#include"Sql.h"
void SeqlistInitializes(Sheet* pt)//初始化
{
	assert(pt);
	TYPE* tmp = (TYPE*)malloc(sizeof(TYPE) * 8);
	if (tmp == NULL)
	{
		perror("SeqlistInitializes");
		return;
	}
	pt->p = tmp;
	pt->size = 0;
	pt->capacity = 8;


}
void SeqListInit(Sheet* pt,TYPE n)////放入数据//
{
	capacityl(pt);//扩容
	pt->p[pt->size] = n;
	pt->size++;
}
void capacityl(Sheet* pt)//判断是否需要扩容
{assert(pt);
	if (pt->size == pt->capacity)
	{
		TYPE* tmp = (TYPE*)realloc(pt->p, sizeof(TYPE) * (pt->capacity + 1));
			if(tmp == NULL)
			{
				perror("apacityl");
				return;
			}
			pt->p = tmp;
			pt->capacity++;

	}

}//扩容
void Sheetprintf(const Sheet*pt)//输出顺序表
{for(int i=0;i<pt->size;i++)
	printf("%d ", pt->p[i]);
}
void SeqListPushBack(Sheet* pt,TYPE n)//尾插
{
	assert(pt);
	capacityl(pt);
	pt->p[pt->size] = n;
	pt->size++;

}

void SeqListPushFront(Sheet* pt,TYPE n)//头插//
{
	assert(pt);
	capacityl(pt);
	for (int i = pt->size; i>0; i--)
	{
		pt->p[i] = pt->p[i-1];
	}
	pt->p[0] = n;
	pt->size++;
}
void SeqListPopFront(Sheet* pt)//头删
{
	assert(pt&&pt->size>0);
	for (int i = 0; i < pt->size-1; i++)
	{
		pt->p[i] = pt->p[i + 1];

	}

	pt->size--;
}
void SeqListPopBack(Sheet* pt)//尾删
{
	assert(pt->size>0);
	pt->size--;
}
void SeqListPop(Sheet* pt, int n)//随机删
{
	if(pt ==NULL|| pt->size > 0||pt->size>n||n>0);
	return;
	for (int i = n - 1; i < pt->size-1; i++)
	{
		pt->p[i] = pt->p[i + 1];
	}
	pt->size--;
}
void SeqListPuch(Sheet* pt, int n,TYPE m)//随机插入
{
	if(pt==NULL||pt->size>0||n>0||pt->size>=n);
	return;
	capacityl(pt);
	int i = 0;
	for ( i = pt->size; i >= n; i--)
	{
		pt->p[i] = pt->p[i-1];
	}
	pt->p[i] = m;
	pt->size++;
}
void exits(Sheet* pt)//结束程序，释放所开辟的空间，
{
	assert(pt);
	free(pt->p);
	pt->p = NULL;
	pt->size = 0;
	pt->capacity = 0;

}
int LocateElem(const Sheet* pt, TYPE n)
{
	assert(pt);
	for (int i = 0; i < pt->size; i++)
	{
		if (pt->p[i] == n)
		{
			return i;//找到就返回i
			break;
		}
		
	}
	
	return -1;//找不到就返回-1；
}
void FindElem(const Sheet* pt, int m)
{
	if (pt->size == 0 || pt->size <= m || m < 0 || pt == NULL)
	{
		printf("操作有误\n");
		return;
	}
	printf("查找下标为%d的元素:%d ",m,pt->p[m]);

}