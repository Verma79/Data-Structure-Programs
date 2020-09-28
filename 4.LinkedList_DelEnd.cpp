//Delete Element from End of Single Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *head;

void insert(int x) //SAME LIKE INSERTION AT THE BEGINING 
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->next = head;
	head = newNode;
}

void Delete() //--- SEE THIS ---
{
	struct Node *temp = head; //temp is carrying address of first node; temp is first node 
	struct Node *pretemp;
	if(temp==NULL)
	{
		printf("Empty List\n");
	}
	else
	{
		while(temp->next!= NULL) //traverse list until temp not points to NULL; in case list has only 1 node means temp is pointing to NULL so we will not traverse and will free temp 
		{
			pretemp = temp; //making pretemp = temp  
			temp = temp->next; //and temp becomes next node
		}
		pretemp->next = NULL; //pretemp will become null 
		free(temp); //because we deleted temp
	}
}

void disp() //SAME LIKE PREVIOUS
{
	struct Node *ptr = head;
	printf("List is : \n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr = ptr->next;
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
