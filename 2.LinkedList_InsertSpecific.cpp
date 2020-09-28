//Insert the node at any other position between end and beginning in single

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

void insert_position(int value,int position) //--- SEE THIS ---
{
	int count=0;
	struct Node *current,*temp;
	current=head; //For traversing the list we made current pointer = head so that we get the address of node in the begining of list to move forward
	while(current!=NULL)
	{
		count++; // in 1st iteration count=1 means checking first node of list...first node means count=1 
		if(count==position-1) 
		{
			temp=(struct Node*)malloc(sizeof(struct Node)); //creating a node 
			temp->data=value; //adding value to its data field
			temp->next=current->next; 
			current->next=temp;
		}
		current=current->next;
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
	
	insert_position(1,2);
	insert_position(5,3);
	disp();
	
	return 0;
}
