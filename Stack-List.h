#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int TYPE;
typedef struct Note
{
	struct Note* next;
	TYPE val;
}Stack ;
typedef  struct data
{
	struct Note* head;
	int count;
} data;
void StacPush(data*q,TYPE x);
void StackPop(data*q);
void StackDestory(data*q);
int StackSize(data*q);
bool StackEmpty(data*q);
TYPE StackTop(data* ps);
