#include<stdio.h>
#include<stdlib.h>

int add(int,int);
int division(int,int);
int multi(int,int);

void main()
{
	printf("Hello World");
	printf("Addtion:%d",add(1,2));
	printf("Multiplication:%d",multi(1,2));
	printf("Division:%d",division(1,2));

}

int add(int a,int b)
{
	return a+b;

}
int multi(int a,int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/b;
}

