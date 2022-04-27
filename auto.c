#include <stdio.h>  
void fun()
{
	auto int b;
	printf("%d",b);
}
int main()  
{  
	int a; //local act as auto  
	float f;   
	printf("%d\t  %f\n",a,f); //local values so print garbage value
	int b=10;
	printf("%d\n",b);
	fun();
	return 0;  
}  
