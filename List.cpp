
//单链表
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

#define ElemType int
typedef struct ListNode{

	ElemType data;
	struct ListNode *next;
} ListNode;

typedef ListNode* List;

void InitList(List* head)
{
	(*head)=NULL;

}

//头结点
void InitListByHead(List* head)
{
	(*head)=(ListNode*)malloc(sizeof(ListNode));
	assert(*head!=NULL);
	(*head)->next=NULL;

}
//tou插法
void CreateListByHead(List * head)
{
	for(int i=1;i<=10;++i)
	{
		ListNode *s=(ListNode*)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i;
		s->next=(*head)->next;
		(*head)->next=s;
		
	}
}
//尾插法
void CreateListByHead2(List * head)
{
	ListNode *p=*head;
	for(int i=1;i<=10;++i)
	
		//尾插法
		p=p->next=(ListNode*)malloc(sizeof(ListNode));
		assert(p!=NULL);
		p->data=i;
		p->next=NULL;

	}
}
void ShowListByHead(List *head)
{
	ListNode *p=(*head)->next;
	while (p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n");
}
//尾插法
void CreateList(List * head)
{
	*head=(ListNode*)malloc(sizeof(ListNode));
	assert(*head !=NULL);

	(*head)->data=1;
	(*head)->next=NULL;
	ListNode *p=*head;
	for(int i=2;i<=10;++i)
	{

		ListNode *s=(ListNode*)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i;
		s->next=NULL;
		p->next=s;
		p=s;
	}
}
//头插法
void CreateList2(List * head)
{
	*head=(ListNode*)malloc(sizeof(ListNode));
	(*head)->data=1;
	(*head)->next=NULL;

	for (int i=2;i<10;++i)
	{
		ListNode *s=(ListNode*)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i;
		s->next=*head;
		(*head)=s;
	}
}
void ShowList(List *head)
{
	ListNode *p=*head;
	while (p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n");
}
//http://edu.51cto.com/lesson/id-79891.html
int main( int argc, char* argv[] )
{
	List mylist;

	InitList(&mylist);
	CreateList2(&mylist);
	ShowList(&mylist);
	
	List myHeadlist;
	InitListByHead(&myHeadlist);
	CreateListByHead2(&myHeadlist);
	ShowListByHead(&myHeadlist);


	return 0;
}