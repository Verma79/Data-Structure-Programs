//Count Total Node in Single Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head;

void insert(int data) //SAME LIKE INSERTION AT BEGINING 
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void countNode() //--- SEE THIS ---
{
	struct Node *temp = head; //temp is carrying address of first node 
	int count = 0;
	while(temp!=NULL) //temp is null then count=0 otherwise will enter loop 
	{
		count++;
		temp = temp->next;
	}
	printf("Total Node is : %d",count);
}

int main()
{
	head = NULL;
	insert(10);
	insert(20);
	insert(30);
	countNode();
	return 0;
}

