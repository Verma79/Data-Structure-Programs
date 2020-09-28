//Delete Element from Beginning of Single Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head;

void insert(int x) //SAME AS FOR INSERTING AT BEGINING
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->next = head;
	head = newNode;
}

void Delete() //--- SEE THIS ---
{
	struct Node *temp = head; // temp is carrying address of first node
	if(temp==NULL)
	{
		printf("Linked list is Empty\n");
	}
	else //deleting node at the begining of list
	{
		head = head->next; //now head is pointing to the node pointed by first node now first node is lost from the linked list 
		free(temp); //memory of first node is free now
	}
}

void disp() //SAME LIKE PREVIOUS 
{
	struct Node *prt = head;
	printf("\nList is : \n");
	while(prt!=NULL)
	{
		printf("%d",prt->data);
		prt = prt->next;
	}
	printf("\n");
}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	disp();
	
	Delete();
	disp();
	return 0;
}
