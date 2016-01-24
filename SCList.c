
#include "SClist.h"

void InitSCList(struct List *list)
{
	Node *s = (Node*)malloc(sizeof(Node));
	(assert(s != NULL));
	list->first = list->last = s;
	list->last->next = list->first;
	list->size = 0;


}
