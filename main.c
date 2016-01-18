
#include "SeqList.h"
//Ŀ����û���ڴ�й¶ No memory leaks detected.
#include <vld.h>

 int main( int argc, char * argv[])
 {

	 SeqList mylist;
	 int select=1;
	 ElemType item;
	 int pos=0;
	 InitSeqList(&mylist);
	 
	 while(select)
	 {

		 printf("***************************************\n");
		 printf("* [1]  push_back		[2] push_front *\n");
		 printf("* [3]  show_list		[4] pop_back   *\n");
		 printf("* [5]  pop_front		[6] insert_pos *\n");
		 printf("* [7]  find			[8] length     *\n");
		 printf("* [9]  delete_pos		[10] delete_val *\n");
		 printf("* [11] sort			[12] resver     *\n");
		 printf("* [13] clear			[14*] destroy    *\n");
		 printf("* [0] quit_system						*\n");
		 printf("***************************************\n");
		 printf("please select:>");
		 scanf("%d",&select);
		 if (select==0)
		 {
			 break;
		 }
		 switch(select)
		 {
		 case 1:
			 {
				 printf("please input insert data(-1 end input)>");
				 //scanf("%d",&item)
				 while(scanf("%d",&item),item!=-1)
				 {
					 push_back(&mylist,item);
				 }				 
			 }
			 break;
		 case 2:
			 {
				 printf("please input insert data(-1 end input)>");
				 //scanf("%d",&item)
				 while(scanf("%d",&item),item!=-1)
				 {
					 push_front(&mylist,item);
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
				 printf("please input data:>");
				 scanf("%d",&item);
				 printf("please input pos:>");
				 scanf("%d",&pos);
				 insert_pos(&mylist,pos,item);
			 }
			 break;
		 case 7:
			 {
				 printf("������Ҫ���ҵ�����:\n");
				 scanf("%d", &item);
				 pos = find(&mylist, item);
				 if (pos == -1)
				 {
					 printf("���ҵ�����%d��˳����в�����\n",item);
				 }
				 else {
					 printf("���ҵ�����%d��˳����е�%d�±�λ��\n",item,pos);


				 }

			 }
			 break;
		 case 8:
			 {
				 printf("˳���ĳ���Ϊ:> %d \n",length(&mylist));
			 }
			 break;
		 case 9:
		 {

			 printf("������Ҫɾ�����ݵ�λ��:\n");
			 scanf("%d", &pos);
			 delete_pos(&mylist, pos);

		 }
		 break;
		 case 10:
		 {
			 printf("������Ҫɾ�������ݣ�>");
			 scanf("%d", &item);
			 delete_val(&mylist, item);

		 }
		 break;
		 case 11:
			 {
				 sort(&mylist);
			 }
			 break;
		 case 12:
		 {
			 resver(&mylist);

		 }
		 break;
		 case 13:
		 {
			 clear(&mylist);
		 }
		 break;
// 		 case 14:
// 		 {
// 			 destroy(&mylist);
// 		 }
// 		 break;
		 default:
			 printf("input error,reinput\n");
			 break;
		 }
	 }
	 destroy(&mylist);


	 return 0;
 }