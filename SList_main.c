
#include "SList.h"
//Ŀ����No memory leaks detected
#include <vld.h>

void main()
{

	List mylist;
	InitList(&mylist);
	int select = 1;
	ElemType item ;
	Node *p;
	while (select)
	{

		printf("*******************************************\n");
		printf("* [1]  push_back		[2] push_front    *\n");
		printf("* [3]  show_list		[4] pop_back      *\n");
		printf("* [5]  pop_front		[6] insert_val    *\n");
		printf("* [7]  find			    [8] length        *\n");
		printf("* [9]  delete_val		[10] sort         *\n");
		printf("* [11] resver			[12] clear        *\n");
		printf("* [13] destroy			[14] quit_system  *\n");
		printf("******************************************\n");
		printf("please select:>");
		scanf("%d", &select);
		if (select == 0)
		{
			break;
		}
		switch (select)
		{
			case 1:
			{
				printf("please input insert data(-1 ����)>");
				//scanf("%d", &item);
				while (scanf("%d", &item), item != -1)
				{
					push_back(&mylist, item);
				}
			}
			break;
			case 2:
			{
				printf("please input insert data(-1 ����)>");
				while (scanf("%d", &item), item != -1)
				{
					push_front(&mylist, item);
				}

			}
				break;
			case 3:
			{
				show_list(&mylist);
			}
			break;
			case 4:
			{
				pop_back(&mylist);
			}
			break;
			case 5:
				{
					pop_front(&mylist);
				}
				break;
			case 6:
			{
				printf("������Ҫ���������:>");
				scanf("%d", &item);

				insert_val(&mylist,item);
			}
			break;
			case 7:
			{
				printf("������Ҫ���ҵ�����:>");
				scanf("%d", &item);
				p=find(&mylist, item);
				if (p == NULL)
				{
					printf("Ҫ���ҵ�����%d������\n", item);
				}
			}
			break;
			case 8:
			{
				printf("������ĳ���Ϊ%d\n",length(&mylist));
			}
			break;
			case 9:
			{
				printf("������Ҫɾ��������:>");
				scanf("%d", &item);
				delete_val(&mylist, item);
				
			}
			break;
			case 10:
			{
				sort(&mylist);
			}
			break;
			case 11:
			{
				resver(&mylist);
			}
			break;
			case 12:
			{
				clear(&mylist);
			}
			break;
			/**case 13:
			{
				destroy(&mylist);
			}
			break;
			*/
				
			default:
				break;
		}
	}
	destroy(&mylist);


}