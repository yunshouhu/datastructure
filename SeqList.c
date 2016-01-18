#include "SeqList.h"


BOOL Inc(SeqList *list)
{
	if (list->size >= list->capacity)
	{
		//增大空间
		ElemType* newbase = (ElemType*)realloc(list->data, sizeof(ElemType)*(list->capacity + INC_SIZE));
		if(newbase==NULL)
		{
			printf("增配空间失败！内存不足\n");
			return FALSE;
		}
		list->data = newbase;
		list->capacity += INC_SIZE;
	}
	
	return TRUE;
}
void InitSeqList(SeqList *list)
{

	list->data = (ElemType*)malloc(sizeof(ElemType)*SEQLIST_INIT_ZISE);

	assert(list!=NULL);
	list->capacity=SEQLIST_INIT_ZISE;
	list->size=0;

}
void push_back(SeqList *list,ElemType x)
{
	if(list->size>=list->capacity && !Inc(list))
	{

		printf("list full,%d cannot insert data\n",x);
		return ;
	}
	list->data[list->size]=x;
	(list->size)++;

}
//fron inert
void push_front(SeqList *list,ElemType x)
{
	int i=0;
	if(list->size>=list->capacity && !Inc(list))
	{
		printf("list full,%d cannot insert data\n",x);
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
	if (list->size >= list->capacity && !Inc(list))
	{
		printf("list full,%d cannot  insert data by pos\n", x);
		return;
	}

	for(i=list->size;i>pos;--i)
	{

		list->data[i]=list->data[i-1];
	}
	list->data[pos]=x;
	list->size++;

}
int find(SeqList *list, ElemType key)
{
	for (int i = 0; i < list->size; ++i)
	{
		if (list->data[i] == key)
		{
			return i;

		}
	}
	return -1;
}
int length(SeqList *list)
{
	return list->size;
}
void delete_pos(SeqList *list,int pos)
{
	if (pos < 0 || pos >= list->size)
	{
		printf("删除数据的位置非法，不能删除数据！\n");
		return;
	}
	for (int i = pos; i < list->size-1; ++i)
	{
		list->data[i] = list->data[i+1];
	}
	list->size--;

}

void delete_val(SeqList *list, ElemType key)
{
	int pos = find(list, key);
	if (pos == -1)
	{
		printf("要删除的数据不存在\n");
		return;
	}
	delete_pos(list, pos);
}
void sort(SeqList *list)
{

	for (int i = 0; i < list->size; ++i)
	{
		for (int j = list->size-1;j>0; j--)
		{
			if (list->data[j] < list->data[j - 1])
			{
				ElemType temp = list->data[j];
				list->data[j] = list->data[j - 1];
				list->data[j - 1] = temp;
			}

		}
	}
}
void resver(SeqList *list)
{
	if (list->size == 0 || list->size == 1)
	{
		return;
	}
	int low = 0;
	int high = list->size - 1;
	ElemType temp;
	while (low < high)
	{
		temp = list->data[low]; 
		list->data[low] = list->data[high];
		list->data[high] = temp;
		low++;
		high--;
	}

}
void clear(SeqList *list)
{
	list->size = 0;
}
void destroy(SeqList *list)
{

	if (list->data != NULL)
	{
		free(list->data);
		list->data = NULL;
		list->capacity = 0;
		list->size = 0;
	}
}
void merge(SeqList *lt, SeqList *la, SeqList *lb)
{
	lt->capacity = la->size + lb->size;
	lt->data = (ElemType*)malloc(sizeof(ElemType) *lt->capacity);
	assert(lt->data != NULL);

	int ia = 0;
	int ib = 0;
	int ic = 0;
	while(ia<la->size && ib<lb->size)
	{
		if(la->data[ia]< lb->data[ib])
		{
			lt->data[ic++] = la->data[ia++];
		}else
		{
			lt->data[ic++] = lb->data[ib++];

		}
	}
	while(ia<la->size)
	{
		lt->data[ic++] = la->data[ia++];
	}
	while(ib< lb->size)
	{
		lt->data[ic++] = lb->data[ib++];
	}
	lt->size = la->size + lb->size;


}