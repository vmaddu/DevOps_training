#include<stdio.h>

int sub(int,int);
int add(int,int);
int div(int,int);

void main()
{
	cout<<"Hello World...!";
	cout<<"subtraction:"<<sub(a,b);
	cout<<"division:"<<div(a,b);
}

int div(int a,int b)
{
	return a/b;
}

int sub(int a,int b)
{
	return a-b;

}
int add(int a,int b)
{
	return a+b;
}
