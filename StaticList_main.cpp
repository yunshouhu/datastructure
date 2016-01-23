
#include "StaticList.h"

void main()
{
	//c++ int a = 10;
	//int &b = a;
	StaticList sl;
	InitList(sl);
	for (int i = 0; i < 15;++i)
	{
		Insert(sl, 'A' + i);
	}
	showSList(sl);
	Delete(sl);
	showSList(sl);



}