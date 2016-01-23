#include "StaticList.h"
#include <cstdio>

int Malloc_SL(StaticList &space)
{
	int i = space[1].cur;
	if(space[i].cur!=0)
	{
		//还有备用空间
		space[1].cur = space[i].cur;
	}
	return i;
}

void Free_SL(StaticList &space,int k)
{
	space[k].cur = space[1].cur;
	space[1].cur = k;
	
}
void InitList(StaticList &space)
{
	for (int i = 0; i < MAX_SIZE-1;++i)
	{
		space[i].cur = i + 1;
	}
	space[MAX_SIZE - 1].cur = 0;
	space[0].cur = -1;

}
void Insert(StaticList &space, ElemType x)
{
	int i = Malloc_SL(space);
	if(i==0)
	{
		printf("申请结点空间失败!\n");
		return;
	}
	space[i].data = x;
	if(space[0].cur==-1)
	{
		space[i].cur = -1;		
	}else
	{
		space[i].cur = space[0].cur;			
	}
	space[0].cur = i;
	
}
void showSList(StaticList &space)
{
	int i = space[0].cur;
	while(i!=-1)
	{
		printf("%c==>", space[i].data);
		i = space[i].cur;
	}
	printf("null\n");
}
void Delete(StaticList &space)
{
	//删除头结点
	int i = space[0].cur;
	space[0].cur = space[i].cur;
	Free_SL(space, i);
	/**回收空间
	space[i].cur = space[1].cur;
	space[1].cur = i;
	*/
}
