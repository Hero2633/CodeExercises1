#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int TYPE;
typedef struct Sheet
{
	TYPE *p;
	int size;//表示存放的元素
	int capacity;//表示当前空间的容量；
}Sheet;


void SeqListInit(Sheet*pt,TYPE);//放入数据//
void SeqListPushFront(Sheet* pt,TYPE n);//头插//
void SeqListPushBack(Sheet* pt,TYPE n);//尾插//
void SeqListPopFront(Sheet* pt);//头删//
void SeqListPopBack(Sheet* pt);//尾删//
void SeqListPop(Sheet* pt,int n);//随机删//
void SeqListPuch(Sheet* pt,int n,TYPE m);//随机插入
int LocateElem(const Sheet* pt, TYPE n);//查找顺序表中第一个等于n的值，并返回其下标
void FindElem(const Sheet* pt, int m);//查找第i个元素，并打印；
void SeqlistInitializes(Sheet* pt);//初始化//
void Sheetprintf(Sheet*pt);//输出//
void capacityl(Sheet* pt);//扩容//
void exits(Sheet*pt);//结束，
































