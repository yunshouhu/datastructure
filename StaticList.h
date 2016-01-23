
#ifndef StaticList_h__
#define StaticList_h__

#define ElemType char
#define MAX_SIZE 20
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
typedef struct ListNode
{
	ElemType data;
	int cur;
} ListNode;
typedef ListNode StaticList[MAX_SIZE];

int Malloc_SL(StaticList &space);
void Free_SL(StaticList &space,int k);

void InitList(StaticList &space);
void Insert(StaticList &space, ElemType x);
void showSList(StaticList &space);
void Delete(StaticList &space);

#endif // StaticList_h__