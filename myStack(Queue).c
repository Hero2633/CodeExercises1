#define _CRT_SECURE_NO_WARNINGS
typedef int QDataType;
// 链式结构：表示队列 
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	int count;
	QNode* head;
	QNode* tail;
}Queue;

// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列头部元素 
QDataType QueueFront(Queue* q);
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数 
int Queue_Size(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* q);
// 销毁队列 
void QueueDestroy(Queue* q);
// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
	q->count = 0;

}
// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	if (q->head == NULL)
	{
		QNode* newnote = (QNode*)malloc(sizeof(QNode));
		assert(newnote);
		q->head = newnote;
		q->tail = newnote;
		newnote->data = data;
		newnote->next = NULL;
	}
	else
	{
		QNode* newnote = (QNode*)malloc(sizeof(QNode));
		assert(newnote);
		newnote->data = data;
		q->tail->next = newnote;
		q->tail = newnote;
		newnote->next = NULL;

	}
	q->count++;
}
// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);

	assert(q->head);
	QNode* next = q->head->next;
	free(q->head);
	q->head = next;
	if (q->head == NULL)
		q->tail = NULL;
	q->count--;

}
// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->head);
	return q->head->data;
}

// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{

	assert(q);
	assert(q->tail);
	return q->tail->data;

}
// 获取队列中有效元素个数 
int Queue_Size(Queue* q)
{
	assert(q);
	return q->count;
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->count == 0;

}
// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->head;

	while (cur != NULL)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
}

typedef struct {
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate() {
	MyStack* tmp = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&tmp->q1);
	QueueInit(&tmp->q2);
	return tmp;
}

void myStackPush(MyStack* obj, int x) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	QueuePush(noEmpty, x);

}

int myStackPop(MyStack* obj) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	while (Queue_Size(noEmpty) != 1)
	{
		QueuePush(Empty, QueueFront(noEmpty));
		QueuePop(noEmpty);
	}
	QDataType tmp = QueueFront(noEmpty);
	QueuePop(noEmpty);
	return tmp;
}

int myStackTop(MyStack* obj) {
	Queue* Empty = &obj->q1;
	Queue* noEmpty = &obj->q2;
	if (QueueEmpty(&obj->q2))
	{
		Empty = &obj->q2;
		noEmpty = &obj->q1;

	}
	return QueueBack(noEmpty);
}

bool myStackEmpty(MyStack* obj) {
	return obj->q1.count == 0 && obj->q2.count == 0;
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
	obj = NULL;
}