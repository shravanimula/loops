#include<stdio.h>
int a,b,result;
int add(int ,int);
int main()
{
	printf("enter a  value\n");
	scanf("%d",&a);
	printf("enter b vaule\n");
	scanf("%d",&b);
	add(a,b);
	printf("result:%d\n",result);
}
