//Count Total Element in Stack Using Linked List

#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};

struct Node *top = NULL;

void push(int value)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = value;
	temp->link = top;
	top = temp;
}

void disp()
{
	struct Node *head = top;
	printf("Elements are : \n");
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head = head->link;
	}
	printf("\n");
}

void countNode()
{
	struct Node *temp = top;
	int count = 0;
	while(temp!=NULL)
	{
		count++;
		temp = temp->link;
	}
	printf("Total Node is : %d",count);
}

int main()
{
	push(10);
	push(20);
	push(30);
	disp();
	countNode();
	return 0;
}
