#include<stdio.h>
int main()
{
	int value;
	printf("enter the value:");
	scanf("%d",&value);
	printf("the value is:%d",value);
	value/=5;
	printf("the value is :%d",value);
	return 0;
}