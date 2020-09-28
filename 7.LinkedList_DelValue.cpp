//Delete any Value of Single Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head;

void insert(int x) //SAME LIKE INSERTION AT BEGINING 
{
	struct Node *link = (struct Node*)malloc(sizeof(struct Node));
	link->data = x;
	link->next = head;
	head = link;
}

void DeleteAnyValue(int x) //--- SEE THIS ---
{
	struct Node* temp=head; //temp is carrying address of first node 
	if(head==NULL) //if list is empty 
	{
		printf("No records to delete");
	}
	else if(temp->data==x) //if the value by user matches first node data 
	{
		head=temp->next; //head will now point to 2nd node 
		free(temp); //because 1st node is now deleted 
	}
	else
	{
		struct Node* temp2=NULL; 
		temp2=temp->next; //temp2 is carying address of 2nd node 
		while(temp->next->data!=x) //if the value of 2nd node doesnt matches the value of user 
		{
			temp=temp->next; //temp became 2nd node 
			temp2=temp->next; // temp2 became 3rd node 
		}
		temp->next=temp2->next;
		free(temp2);
	}
}

void disp() //SAME LIKE PREVIOUS 
{
	struct Node *prt = head;
	printf("List is : \n");
	while(prt!=NULL)
	{
		printf("%d\t",prt->data);
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
	DeleteAnyValue(30);
	disp();
	return 0;
}

