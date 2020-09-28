//Stack using Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node //SAME LIKE LINKED LIST 
{
	int data;
	struct Node *link;
};

struct Node *top = NULL; //initally top is NULL like head was NULL in Linked list 

void push(int value) //SAME LIKE INSERTION AT BEGINING OF LINKED LIST 
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node)); //creating node like linked list 
	temp->data = value; //initialise node data field with data 
	temp->link = top; //1st node inserted will point to NULL because it will become last in stack then only it becomes LIFO, FILO
	top = temp; //top is carrying address of node inserted , so top will carry address of last node inserted.
}

void pop() //LIFO means node whose address in top will be deleted 
{
	struct Node *del = top;
	if(top!=NULL)
	{
		top = top->link;
		free(del);
	}
	else
	{
		printf("Stack Underflow\n");
	}
}

void TOP() //data in top
{
	struct Node *t = top;
	printf("Top elements is %d",t->data);
}

void disp() //SAME LIKE LINKED LIST
{
	struct Node *head = top;
	printf("Elements are : \n");
	while(head!=NULL){
	printf("%d ",head->data);
	head = head->link;
	}
	printf("\n");
}

int main()
{
	push(10);
	push(20);
	push(30);
	disp();
	pop();
	disp();
	TOP();
	return 0;
}
