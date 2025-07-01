#include<stdio.h>
int main()
{
	int perc;
	printf("enter the marks:");
	scanf("%d",&perc);
	printf("the marks is:%d\n",perc);
	perc%=3;
	printf("the marks is :%d",perc);
	return 0;
}