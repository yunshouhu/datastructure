#include "SeqList.h"

void InitSeqList(SeqList *list)
{

	list->data=(ElemType*)malloc(sizeof(ElemType));
	assert(list!=NULL);
	list->capacity=SEQLIST_INIT_ZISE;
	list->size=0;

}
void push_back(SeqList *list,ElemType x)
{
	if(list->size>=list->capacity)
	{

		printf("list full,cannot insert data\n");
		return ;
	}
	list->data[list->size]=x;
	(list->size)++;

}
//fron inert
void push_front(SeqList *list,ElemType x)
{
	int i=0;
	if(list->size>=list->capacity)
	{
		printf("list full,cannot insert data\n");
		return ;
	}
	
	for(i=list->size;i>0;--i)
	{
		list->data[i]=list->data[i-1];
	}
	list->data[0]=x;
	(list->size)++;

}
void show_list(SeqList *list)
{
	int i=0;
	for(i=0;i<list->size;i++)
	{

		printf("%d ",list->data[i]);
	}
	printf("\n");
}
void pop_back(SeqList *list)
{

	if(list->size==0)
	{

		printf("list is null,cannot delete data\n");
		return ;
	}
	(list->size)--;
}
void pop_front(SeqList *list)
{

	int i=0;
	if(list->size==0)
	{

		printf("list is null,cannot delete data\n");
		return ;
	}
	for(i=1;i<list->size;i++)
	{
		list->data[i-1]=list->data[i];
	}
	(list->size)--;

}
void insert_pos(SeqList *list,int pos,ElemType x)
{
	int i=0;
	if (pos<0 || pos>list->size)
	{
		printf("invalid or error pos \n");
		return ;
	}
	for(i=list->size;i>pos;--i)
	{

		list->data[i]=list->data[i-1];
	}
	list->data[pos]=x;
	list->size++;

}