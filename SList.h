
#ifndef SList_h__
#define SList_h__

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#define ElemType int

//���Ա�֮������ʵ��

//˫������
typedef struct Node
{
	ElemType data;
	struct Node *next;

} Node,*PNode;

typedef struct List
{
	PNode first;//ͷָ��
	PNode last;//βָ��
	size_t size;

} List;

void InitList(List *list);
void push_back(List *list, ElemType item);
void push_front(List *list, ElemType x);
void show_list(List *list);
void pop_back(List *list);
void pop_front(List *list);
//��ֵ�������
void insert_val(List * list, ElemType x);
Node*  find(List *list, ElemType key);
int length(List* list);

#endif // SList_h__