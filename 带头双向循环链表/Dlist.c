#define _CRT_SECURE_NO_WARNINGS
#include"Dlist.h"
void test1()
{
	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 4);
	TailInsert(dummyhead, 5);
	TailInsert(dummyhead, 6);
	TailInsert(dummyhead, 7);
	ListPrintf(dummyhead);


}
void test2()
{
	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 4);
	TailInsert(dummyhead, 5);
	TailInsert(dummyhead, 6);
	TailInsert(dummyhead, 7);
	ListPrintf(dummyhead);
	TailDel(dummyhead);
	TailDel(dummyhead); 
	TailDel(dummyhead); 
	TailDel(dummyhead);
	ListPrintf(dummyhead);

}
void test3()
{
	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 4);
	ListPrintf(dummyhead);
	HeadInsert(dummyhead, 1);
	HeadInsert(dummyhead, 2);
	HeadInsert(dummyhead, 3);
	HeadInsert(dummyhead, 4);
	HeadInsert(dummyhead, 5);
	ListPrintf(dummyhead);
}
void test4()
{

	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 4);
	ListPrintf(dummyhead);
	/*ListPrintf(dummyhead);*/
	HeadDel(dummyhead);
	ListPrintf(dummyhead);
	HeadDel(dummyhead);
	ListPrintf(dummyhead);
	HeadDel(dummyhead);
	ListPrintf(dummyhead);
	HeadDel(dummyhead);
	/*HeadDel(dummyhead);
	HeadDel(dummyhead);*/
	ListPrintf(dummyhead);

}
void test5()
{

	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 3);
	TailInsert(dummyhead, 3);
	ListPrintf(dummyhead);
	List*ret=FindVal(dummyhead,3);
	//if (ret != NULL)
	//	printf("%p %d", ret->prev, ret->prev->val);//假设返回的·是3的地址那么3的prev就应该是2
	//else
	//	printf("没找到\n");

	if (ret != NULL)
	{
		List* cur = ret->next;
		for (cur; cur != ret; cur = cur->next)
		{
			if (cur == dummyhead)
				continue;
			if (cur->val == 3)
				printf("%p %d\n",cur,cur->val);
		}
	}

}
void test6()
{

	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 9);
	TailInsert(dummyhead, 4);
	TailInsert(dummyhead, 5);
	TailInsert(dummyhead, 6);
	TailInsert(dummyhead, 7);
	TailInsert(dummyhead, 8);
	ListPrintf(dummyhead);
	List* ret = FindVal(dummyhead, 6);
	printf("%d \n",ret->val);
}
void test7()
{
	List* dummyhead = NULL;
	dummyhead = Dummyhead();
	TailInsert(dummyhead, 1);
	TailInsert(dummyhead, 2);
	TailInsert(dummyhead, 9);
	TailInsert(dummyhead, 4);
	TailInsert(dummyhead, 5);
	TailInsert(dummyhead, 6);
	TailInsert(dummyhead, 7);
	ListPrintf(dummyhead);
	BoardVal(dummyhead, 3, 10);
	BoardVal(dummyhead, 2, 10);
	BoardVal(dummyhead, 1, 10);
	BoardVal(dummyhead, 4, 10);
	BoardVal(dummyhead, 5, 10);
	BoardVal(dummyhead,6,10);
	ListPrintf(dummyhead);
}
 void test8() {
	 List* dummyhead = NULL;
	 dummyhead = Dummyhead();
	 TailInsert(dummyhead, 1);
	 TailInsert(dummyhead, 2);
	 TailInsert(dummyhead, 9);
	 TailInsert(dummyhead, 4);
	 TailInsert(dummyhead, 5);
	 TailInsert(dummyhead, 6);
	 ListPrintf(dummyhead);
	 DelPos(dummyhead, 2);
	 DelPos(dummyhead, 2);
	 DelPos(dummyhead, 2);
	 DelPos( dummyhead,2);
	 DelPos(dummyhead, 2);
	 DelPos(dummyhead, 1);

	
}
 void test()
 {
	 List* dummyhead = NULL;
	 dummyhead = Dummyhead();
	 PosTail(dummyhead, 0, 1);
	 PosTail(dummyhead,0, 2);
	 PosTail(dummyhead,0, 3);
	 PosTail(dummyhead, 0, 4);
	 PosTail(dummyhead, 0, 5);
	 FrontPos(dummyhead, 0, 6);
	 FrontPos(dummyhead, 2, 7);
	 FrontPos(dummyhead, 0, 8);
	 FrontPos(dummyhead, 0, 9);
	 Destroy(dummyhead);
	/* ListPrintf(dummyhead);*/
 }
int main()
{
	//test2();
	/*test3();*/
	/*test4();*/
	test();
	return 0;
}