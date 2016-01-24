#ifndef SClist_h__
#define SClist_h__

#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <malloc.h>
#include <assert.h>


#define ElemType int
typedef struct Node {
	ElemType data;
	struct Node *next;
} Node ,*PNode;

typedef struct List {

	PNode first;
	PNode last;
	int size;

} List;

void InitSCList(List *list);
void push_back(List *list, ElemType item);
void push_front(List *list, ElemType x);
void show_list(List *list);
void pop_back(List *list);
void pop_front(List *list);
//按值有序插入
void insert_val(List * list, ElemType x);
Node*  find(List *list, ElemType key);
int length(List* list);
void delete_val(List *list, ElemType key);
void sort(List *list);
void resver(List *list);
void clear(List *list);
void destroy(List* list);


#endif // SClist_h__

