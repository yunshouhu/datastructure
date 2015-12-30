
//������
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

//ͷ���
void InitListByHead(List* head)
{
	(*head)=(ListNode*)malloc(sizeof(ListNode));
	assert(*head!=NULL);
	(*head)->next=NULL;

}
//tou�巨
void CreateListByHead(List * head)
{
	int i=0;
	for(i=1;i<=10;++i)
	{
		ListNode *s=(ListNode*)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i;
		s->next=(*head)->next;
		(*head)->next=s;
		
	}
}
//β�巨
void CreateListByHead2(List * head)
{
	ListNode *p=*head;
	int i=0;
	for(i=1;i<=10;++i)
	{
		//β�巨
		p=p->next=(ListNode*)malloc(sizeof(ListNode));
		assert(p!=NULL);
		p->data=i;
		p->next=NULL;

	}
}
//��ͷ�ڵ���������
void ReverseByHead(List* head)
{
	ListNode *p=*head,*q;
	p=p->next;
	(*head)->next=NULL;
	while (p!=NULL)
	{
		q=p;
		p=p->next;
		q->next=(*head)->next;
		(*head)->next=q;

	}
}
//����
void Reverse(List* L)
{
	ListNode *p=NULL,*q=*L;
	while (q!=NULL)
	{
		*L=q->next;
		q->next=p;
		p=q;
		q=*L;
	}
	*L=p;
	
}
void ShowListByHead(List *head)
{
	ListNode *p=(*head)->next;
	while (p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
//β�巨
void CreateList(List * head)
{
	int i=0;
	ListNode *p=*head;

	*head=(ListNode*)malloc(sizeof(ListNode));
	assert(*head !=NULL);

	(*head)->data=1;
	(*head)->next=NULL;

	for(i=2;i<=10;++i)
	{

		ListNode *s=(ListNode*)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i;
		s->next=NULL;
		p->next=s;
		p=s;
	}
}
//ͷ�巨
void CreateList2(List * head)
{
	int i=0;
	*head=(ListNode*)malloc(sizeof(ListNode));
	(*head)->data=1;
	(*head)->next=NULL;
	for (i=2;i<10;++i)
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
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
//http://edu.51cto.com/lesson/id-79891.html
int main( int argc, char* argv[] )
{
	List mylist;
	List myHeadlist;

	InitList(&mylist);
	CreateList2(&mylist);
	ShowList(&mylist);
	Reverse(&mylist);
	ShowList(&mylist);
	
	
	InitListByHead(&myHeadlist);
	CreateListByHead2(&myHeadlist);
	ShowListByHead(&myHeadlist);
	ReverseByHead(&myHeadlist);
	ShowListByHead(&myHeadlist);


	return 0;
}