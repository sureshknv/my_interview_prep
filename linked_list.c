#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};

struct node* create_node(int data)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void create_linked_list(struct node **head)
{
	struct node *tmp,*tmp_head;int i;
	tmp_head=NULL;
	for(i=0;i<10;i++){
		
		tmp=create_node(i);
		tmp->next=tmp_head;
		tmp_head=tmp;
		
	}
	*head=tmp_head;
}

void print_list(struct node *head)
{
	while(head !=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}

int main()
{
	struct node * head; int flag,input;
	create_linked_list(&head);
	print_list(head);
	flag=1;
	while(flag)
	{
		scanf ("Enter the choice %d\n"&input);
		switch(i)
	
	}
	return 0;
}
