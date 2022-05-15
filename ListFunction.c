#define _CRT_SECURE_NO_WARNINGS
#include"Stack-List.h"
void StacPush(data* q, TYPE x)
{
	assert(q);
	Stack* head = q->head;
	Stack* newnote = (Stack*)malloc(sizeof(Stack));
	assert(newnote);
	q->head = newnote;
	newnote->val = x;
	newnote->next = head;
	q->count++;
}
void StackPop(data* q)
{
	assert(q);
	assert(q->head);
	Stack* tmp = q->head->next;
	free(q->head);
	q->head = tmp;
	q->count--;

}
void StackDestory(data* q)
{
	assert(q);
	Stack* cur = q->head;
	while (cur)
	{
		Stack* next = cur->next;
		free(cur);
		cur = next;
	}
	q->count = 0;
}
int StackSize(data* q)
{
	assert(q);
	return q->count;
}
bool StackEmpty(data* q)
{
	assert(q);
	return q->count == 0;
}
TYPE StackTop(data* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->val;

}