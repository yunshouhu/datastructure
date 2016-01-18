
#define _CRT_SECURE_NO_DEPRECATE

#ifndef SeqList_h__
#define SeqList_h__
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include "define.h"

#define SEQLIST_INIT_ZISE 8
#define INC_SIZE 10
typedef int ElemType;
typedef struct SeqList{

	ElemType *data;
	int capacity;
	int size;
} SeqList;

BOOL Inc(SeqList *list);
void InitSeqList(SeqList *list);
void push_back(SeqList *list,ElemType x);
void push_front(SeqList *list,ElemType x);
void show_list(SeqList *list);
void pop_back(SeqList *list);
void pop_front(SeqList *list);
void insert_pos(SeqList *list,int pos,ElemType x);
int find(SeqList *list, ElemType key);
int length(SeqList *list);
void delete_pos(SeqList *list,int pos);

void delete_val(SeqList *list, ElemType key);
void sort(SeqList *list);
void resver(SeqList *list);
void clear(SeqList *list);
void destroy(SeqList *list);
void merge( SeqList *lt,  SeqList *la, SeqList *lb);

#endif // SeqList_h__
