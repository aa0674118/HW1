//§PÂ_¬O§_¬°­¿¼Æ//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a1, a2;
	printf("Please enter two integers:");
	scanf_s("%d%d",&a1,&a2);
	if (a1%a2 == 0)
	{
		printf("%d is a multiple of the %d",a1,a2);
	}
	else
	{
		printf("%d is not a multiple of the %d",a1,a2);
	}
	system("pause");
	return 0;
}