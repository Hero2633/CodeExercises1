#define _CRT_SECURE_NO_WARNINGS
#include"Stack-List.h"
void test1()
{
	data p = { NULL,0 };

	StacPush(&p, 1);
	StacPush(&p, 2);
	StacPush(&p, 3);
	StackPop(&p);
	StackPop(&p);
	StackPop(&p);
	printf("[%d] ", 
		StackSize(&p));
	StacPush(&p, 4);
	StacPush(&p, 5);
	StacPush(&p, 6);
	while (!StackEmpty(&p))
	{
		printf("%d ",StackTop(&p));
		StackPop(&p);
	}
	/*printf("%p ",p.head);*/
	StackDestory(&p);
}
int main()
{
	test1();

	return 0;
}