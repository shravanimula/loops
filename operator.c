#include<stdio.h>
int a=10,b=5;
int c=20,d=15;
void arithmetic(void)
{
	printf("Addition=%d\n",a+b);
	printf("Sub=%d\n",a-b);
	printf("Mul=%d\n",a*b);
	printf("Div=%d\n",a/b);
}
void relational(void)
{
	if((a>d)&(a<c)||d!=0)
		printf("hello\n");
	else
		printf("welcome\n");
	if(a==b)
	{
		printf("both equal\n");
	}
	else if(a>b)
	{
		printf("a is grater b\n");
	}
	else if(a<b)
	{
		printf("a is lessthan b\n");
	}
	else if(a<=b)
	{
		printf("a is less than equal to b\n");
	}
	else if(a!=b)
	{
		printf("a is not equla to b");
	}
}
void bitwise(void)
{
	int result= ~a & c;
	printf("%d\n",result);
	int result1= (a<<2) |(b>>2);
	printf("%d\n",result1);
	printf("a is xor with b:%d\n",a^b);
}
void inc_dec(void)
{
	a++;
	++c;
	--b;
	d--;
	printf("a=%d\tc=%d\tb=%d\td=%d\n",a,c,b,d);
}
void logical(void)
{
	int e,f,g;
	printf("a and b:%d\n",e=a&&b);
	printf("a or with b:%d\n",f=a||b);
	printf("not of a:%d\n",g=!a);
}
void conditional(void)
{
	a>c?printf("a is greater\n"):printf("c is geater\n");
}
void assignment(void)
{
	a+=b;
	printf("a=%d\n",a);
	a-=b;
	printf("a=%d\n",a);
}
int main()
{
	arithmetic();
	relational();
	bitwise();
	inc_dec();
	conditional();
	logical();
	assignment();
	return 0;
}
