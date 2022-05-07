#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int TYPE;
struct Dlist
{
	TYPE val;
	struct Dlist* next;
	struct Dlist* prev;

};
typedef struct Dlist List;
//哨兵位
List* Dummyhead();
// 打印
 void ListPrintf(const List*const dummyhead);
// 开辟节点
 List* NewNote();
 int Count(List*dummyhead);
//头插
 void HeadInsert(List*dummyhead,TYPE x);
//头删
 void HeadDel(List*dummyhead);
//尾插
 void TailInsert(List*dummyhead,TYPE x);
//尾删
 void TailDel(List*dummyhead);
//查找[pos]的节点
List* FindVal(List*dummyhead,TYPE pos);
//在pos前插入
void FrontPos(List*dummyhead,TYPE pos,TYPE x);
//修改[pos]的数据
void BoardVal(List*dummyhead,TYPE pos,TYPE x);
//删除pos的数据
void DelPos(List*dummyhead,TYPE pos);
// 在[pos]后插入
void PosTail(List* dummyhead, TYPE pos, TYPE x);
//销毁链表
List* Destroy(List*dummyhead);