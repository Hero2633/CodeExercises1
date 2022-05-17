#define _CRT_SECURE_NO_WARNINGS
typedef int TYPE;
typedef struct Note
{
	struct Note* next;
	TYPE val;
}Stack;
typedef  struct data
{
	struct Note* head;
	int count;
} data;
void StackPush(data* q, TYPE x);
void StackPop(data* q);
void StackDestory(data* q);
int StackSize(data* q);
bool StackEmpty(data* q);
TYPE StackTop(data* ps);
void StackPush(data* q, TYPE x)
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

typedef struct {
	data push;
	data pop;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* tmp = (MyQueue*)malloc(sizeof(MyQueue));
	tmp->push.head = NULL;
	tmp->push.count = 0;
	tmp->pop.head = NULL;
	tmp->pop.count = 0;
	return tmp;
}

void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->push, x);
}

int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->pop))
	{
		while (!StackEmpty(&obj->push))
		{
			StackPush(&obj->pop, StackTop(&obj->push));
			StackPop(&obj->push);
		}

	}
	int tmp = StackTop(&obj->pop);
	StackPop(&obj->pop);
	return tmp;
}

int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->pop))
	{
		while (!StackEmpty(&obj->push))
		{
			StackPush(&obj->pop, StackTop(&obj->push));
			StackPop(&obj->push);
		}

	}
	int tmp = StackTop(&obj->pop);
	return tmp;
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->pop) && StackEmpty(&obj->push);
}

void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->pop);
	StackDestory(&obj->push);
	free(obj);
}