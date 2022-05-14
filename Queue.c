#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"


void test1()
{

	Queue st = { 0,NULL,NULL };
	QueuePush(&st, 1);
	QueuePush(&st, 2);
	QueuePush(&st, 3);
	QueuePush(&st, 4);
	QueuePush(&st, 5);
	QueuePush(&st, 6);
	QueuePop(&st);
	QueuePop(&st);
	QueuePop(&st);
	QueuePop(&st);
	QueuePop(&st);
	QueuePop(&st);
	int ret=QueueBack(&st);
	printf("%d ",ret);
}
void test2()
{
	Queue st = { 0,NULL,NULL };
	QueuePush(&st, 1);
	QueuePush(&st, 2);
	QueuePush(&st, 3);
	//printf("[%d] ", QueueBack(&st));
	QueuePush(&st, 4);
	QueuePush(&st, 5);
	QueuePush(&st, 6);
	//printf("[%d] ", QueueBack(&st));
	printf("[%d] ",st.count);
	/*while (!QueueEmpty(&st))
	{*/
		printf("%d ",QueueFront(&st));
		QueuePop(&st);
	//}
	bool a=QueueEmpty(&st);
	if (a)
		printf("Пе\n");
}
int main()
{
	test2();




	return 0;
}