#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("enter a  number\n");
	scanf("%d",&a);
	printf("enter b number\n");
	scanf("%d",&b);
	char choice;
	while(1)
	{
		printf("a.add s.sub\n");
		printf("Enter choice: ");
		scanf("\n%c",&choice);
		int sum,sub;
		switch(choice)
		{
			case 'a':sum=a+b;
				printf("add two numbers:%d\n",sum);
			       break;
			case 's':printf("sub two numbers:%d\n",sub=a-b);
			       break;
			default:exit(0);
		}
	}
}

