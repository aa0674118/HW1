//�P�_�Ʀr���_�Ʃΰ���//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Please enter an integer:");
	scanf_s("%d",&n);
	if (n % 2 == 0)
	{
		printf("%d is even\n",n);
	}
	else
	{
		printf("%d is odd\n",n);
	}
	system("pause");
	return 0;
}