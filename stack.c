#include<stdio.h>
#define s 5  
int stack[s];
int top=-1;
void push(int ele)
{
	if(top==s-1)
	{
		printf("stck is full\n");
		return;
	}	
	else
	{
		top++;    
		stack[top]=ele;
	}
}
void pop()
{
	if(top==-1)
	{	
		printf("stack is empty\n");
		return;
	}
	else
	{
		printf("poped ele %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)
		printf("%d\n",stack[i]);
}
int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}
