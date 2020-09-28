//Delete a Node at nth Position in Single Linked List

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

void disp() //SAME LIKE PREVIOUS
{
	struct Node *prt = head;
	printf("List is : \n");
	while(prt!=NULL)
	{
		printf(" %d",prt->data);
		prt = prt->next;
	}
	printf("\n");
}

void Delete(int n) // --- SEE THIS ---
{
	struct Node *temp1 = head; //temp1 is carrying address of first node
	if(n == 1)
	{
		head = temp1->next; //means head will carry address of 2nd node 
		free(temp1); //free first node 
	}
	else
	{
		int i;
		for(i = 0; i<n-2; i++) //loop will work only if n=3 
		{
			temp1 = temp1->next; // in case n=3 , temp1 was head means 1st node , now will become 2nd node 
		}
		struct Node *temp2 = temp1->next; //in case n=2 then temp2 is carrying address o 2nd node // to delete 3rd node temp1 is 2nd node temp2 will become 3rd node 
		temp1->next = temp2->next; //temp1 means 1st node will point to 3rd node instead of 2nd //temp1 means 2nd node will point to 4th node
		free(temp2); //2nd node is deleted //temp2 means 3rd node is deleted 
	}
}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	disp();
	
	Delete(3);
	disp();
	return 0;
}


