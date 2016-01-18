#include "SeqList.h"
//目标是没有内存泄露 No memory leaks detected.
#include <vld.h>

int main(int argc, char * argv[])
{

	struct SeqList mylist,youlist,list;
	InitSeqList(&mylist);
	InitSeqList(&youlist);
	push_back(&mylist, 1);
	push_back(&mylist, 3);
	push_back(&mylist, 5);
	push_back(&mylist, 7);
	push_back(&mylist, 9);

	push_back(&youlist, 2);
	push_back(&youlist, 4);
	push_back(&youlist, 6);
	push_back(&youlist, 8);
	push_back(&youlist, 10);
	merge(&list, &mylist, &youlist);
	show_list(&list);

	destroy(&list);
	destroy(&mylist);
	destroy(&youlist);

	return 0;
}