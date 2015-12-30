
#ifndef SeqList_h__
#define SeqList_h__
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#define SEQLIST_INIT_ZISE 18
typedef int ElemType;
typedef struct SeqList{

	ElemType *data;
	int capacity;
	int size;
} SeqList;

void InitSeqList(SeqList *list);
void push_back(SeqList *list,ElemType x);
void push_front(SeqList *list,ElemType x);
void show_list(SeqList *list);
void pop_back(SeqList *list);
void pop_front(SeqList *list);
void insert_pos(SeqList *list,int pos,ElemType x);

#endif // SeqList_h__
