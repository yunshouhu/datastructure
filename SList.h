
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
void delete_val(List *list,ElemType key);
void sort(List *list);
void resver(List *list);
void clear(List *list);
void destroy(List* list);

////////////////////////////////
//������
typedef Node* It;

Node* _buynode(ElemType x);

It begin(List *list);
It end(List *list);
void insert(List *list, It pos, ElemType x);
void push_back_ByIt(List *list, ElemType x);
void push_front_ByIt(List *list, ElemType x);

#endif // SList_h__