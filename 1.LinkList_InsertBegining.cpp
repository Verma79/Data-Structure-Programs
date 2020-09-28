//Single Link List Insertion at the begining of the list

/* first creating pointer head which is initially NULL means its not carrying any address. For insertion of first node named link we created a node using malloc 
function available in C then adding data to its data field and its next field means address is initalised with head which initally contains NULL means first node
we inserted is having NULL in address field means its end of list means only 1 element in in list, also make initalise head with the new node created because now 
head will carry address of first node we inserted so head is carrying address of first node and first node is pointing to NULL. then making next insertion 
again we will create a node and initialise data in its data field and initialise its next field means address field with head which is now carrying address of first 
node so 2nd node we inserted is now carrying the address of first node we inserted and then head is initialised with 2nd node means it will carry address of 2nd 
node we inserted so it can be visualise that we are inserting node in the begining of the list and the first node we inserted is moving to the last of list as it is
pointing to next and whatever node we insert , head is initialised with its address and it becomes the first node. */

#include<stdio.h>
#include<stdlib.h>

 struct Node
 {
	 int data; //data field
	 struct Node *next; //address of next node
 };
 
 struct Node *head; //pointer variable head contains address of first node
 
 void insert(int x)
 {
	 struct Node *link = (struct Node*)malloc(sizeof(struct Node)); //creating a node using malloc function of C
	 link->data = x; //alternative way of writing (*link).data=x 
	 link->next = head; //means in first insertion link->next=NULL because head is initally NULL means empty list thereafter nodes will be added in begining 
	 head = link; //head now contains address of link
 }
 
 void disp()
 {
	 struct Node *prt = head; //pointer to node prt gets address of head
	 printf("List is : \n");
	 while(prt!=NULL)
	 {
		 printf(" %d",prt->data); //prinitng data in node
		 prt = prt->next; //moving to next node 
 	 }
 	 printf("\n");
 }
 
 int main()
 {
 	 head=NULL; //initially empty list
	 insert(10);
	 insert(20);
	 insert(30);
	 disp();
 	 return 0;
 }
