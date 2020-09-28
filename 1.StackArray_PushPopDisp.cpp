//Stack using Array - LIFO 

#include<stdio.h>
#define MAX_SIZE 5

int arr[MAX_SIZE],top=-1,i;

void push(int x)
{
	if(top==(MAX_SIZE-1)) //last element of stack will be IN top=MAX_SIZE-1
	{
		printf("Stack is Overflow\n");
	}
	else
	{
		arr[++top] = x; //inserting 1st element means top becomes 0 top=0 has 1st element 
	}
}

void pop()
{
	if(top<0) //stack is empty 
	{
		printf("Stack is Underflow\n");
	}
	else
	{
		arr[top--];
	}
}

void disp()
{
	printf("\nElements are\n");
	for(i=0; i<=top; i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	push(10);
	push(20);
	push(30);
	disp();
	pop();
	disp();
	return 0;
}

