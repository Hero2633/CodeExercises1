#define _CRT_SECURE_NO_WARNINGS
#include"Dlist.h"
//哨兵位
List* Dummyhead()
{
	List* head = (List*)malloc(sizeof(List));
	assert(head);
	head->next = head;
	head->prev = head;
	head->val = 3;
	return head;

}
//打印
void ListPrintf(const List*const dummyhead)
{
	assert(dummyhead);
	if (dummyhead->next == dummyhead)
	{
		printf("链表已经为空,请不要在继续操作了\n");
		return;
	}
	List* cur = dummyhead->next;
	while (cur != dummyhead)
	{
		printf("%d-",cur->val);
		cur = cur->next;
	}
	putchar('\n');
}
//开辟新节点
List* NewNote()
{
	List* head = (List*)malloc(sizeof(List));
	return head;
}
int Count(List*dummyhead)
{
	assert(dummyhead);
	List* tmp = dummyhead->next;
	int count = 0;
	while (tmp != dummyhead)
	{
		count++;
		tmp = tmp->next;
	}
	return count;
}
//尾插
void TailInsert(List*dummyhead,TYPE x)
{
	
	List* newnote = NewNote();
	newnote->val = x;
	List* tail = dummyhead->prev;
	tail->next = newnote;
	newnote->prev = tail;
	dummyhead->prev = newnote;
	newnote->next = dummyhead;
}
//尾删
void TailDel(List* dummyhead) 
{
	assert(dummyhead);//判断虚拟头节点是否为空
	assert(dummyhead->next!=dummyhead);//防止把虚拟头节点删除了
	List* tail = dummyhead->prev;
	List* front = tail->prev;
	free(tail);
	front->next = dummyhead;
	dummyhead->prev = front;
}
//头插
void HeadInsert(List* dummyhead,TYPE x)
{
	assert(dummyhead);
	List* head = dummyhead->next;
	List* newnote = NewNote();
	newnote->val = x;
	newnote -> next = head;
	head->prev = newnote;
	newnote->prev = dummyhead;
	dummyhead->next = newnote;
}
//头删
void HeadDel(List* dummyhead)
{
	
	assert(dummyhead);
	assert(dummyhead->next!=dummyhead);
	List* next = dummyhead->next;
	List* nextnext = next->next;
	free(next);
	dummyhead->next = nextnext;
	nextnext->prev = dummyhead;
	
}
//查找[pos]的元素所在节点
List* FindVal(List* dummyhead, TYPE pos)
{
	assert(dummyhead);
	List* cur = dummyhead;
	int count = Count(dummyhead);
	assert(count);
	assert(pos<=count&&pos>=1);
	while (pos--)
	{
		cur = cur->next;

	}
	return cur;
}
//修改[pos]所在节点的值
void BoardVal(List* dummyhead, TYPE pos, TYPE x)
{
	assert(dummyhead);
	List* cur = dummyhead->next;
	assert(cur != dummyhead);
	int count = Count(dummyhead);
	assert(count);
	assert(pos <= count && pos >= 1);
	while (--pos) {
	
		cur = cur->next;
	}
	cur->val = x;


}
//删除[pos]位置地节点
void DelPos(List* dummyhead,TYPE pos)
{
	assert(dummyhead);
	List* cur = dummyhead->next;
	assert(cur != dummyhead);
	int count = Count(dummyhead);
	assert(count);
	assert(pos <= count && pos >= 1);
	while (--pos) {

		cur = cur->next;
	}
	List* Front = cur->prev;
	List* next = cur->next;
	free(cur);
	Front->next = next;
	next->prev = Front;

}
//在[pos]后插入
void PosTail(List* dummyhead, TYPE pos, TYPE x)//pos==0相当于头插
{
	List* newnote = NewNote();
	assert(dummyhead);
	List* cur = dummyhead->next;
	int count = Count(dummyhead);
	assert(pos <= count && pos >= 0);
	if (pos == 0)
	{
		HeadInsert(dummyhead, x);
	}
	else
	{
		while (--pos) {

			cur = cur->next;
		}
		newnote->val = x;
		List* next = cur->next;
		newnote->next = next;
		next->prev = newnote;
		cur->next = newnote;
		newnote->prev = cur;
	}
}
//在pos前插入
void FrontPos(List* dummyhead, TYPE pos, TYPE x)//pos==0,尾插
{
	List* newnote = NewNote();
	assert(dummyhead);
	List* cur = dummyhead->next;
	int count = Count(dummyhead);
	assert(pos <= count && pos >= 0);
	if (pos == 0)
	{
		TailInsert( dummyhead,  x);
	}
	else
	{
		while (--pos) {

			cur = cur->next;
		}
		List* Front = cur->prev;
		newnote->val = x;
		newnote->next = cur;
		Front->next = newnote;
		newnote->prev = Front;
		cur->prev = newnote;
	}

}
//销毁链表
List* Destroy(List* dummyhead)
{
	assert(dummyhead);
	assert(dummyhead->next!=dummyhead);
	List* cur = dummyhead->next;
	while (cur != dummyhead)
	{
		List* tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	free(cur);
	cur = NULL;
	return NULL;

}