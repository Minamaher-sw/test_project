#include<stdio.h>
#include <stdlib.h> //for malloc & free functions

struct node{
	int data;
	struct node*next;

};

struct node *head=NULL;

void insert_Linked_list(int value)
{

	  struct node*temp=(struct node*)malloc(sizeof(struct node));
	  temp->data=value;
	  temp->next= head ;
	  head=temp;

}


void display(void)
{
   while(head !=NULL)
   {
	   printf("%d \n",head->data);
	   head=head->next;
   }
}
int main()
{
	setbuf(stdout,NULL);
	insert_Linked_list(20);
	insert_Linked_list(30);
	insert_Linked_list(40);
	insert_Linked_list(50);
	insert_Linked_list(60);
	insert_Linked_list(70);
	delet_Linked_list();
	delet_Linked_list();
	display();

}
