//輸入三數判斷何者最大、何者最小//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a1, a2, a3, largest, smallest;
	printf("Please enter three integers:");
	scanf_s("%d%d%d",&a1,&a2,&a3);
	largest = a1;
	smallest = a1;
	if (a2 > largest)
	{
		largest = a2;
	}
	else if (a2 < smallest)
	{
		smallest = a2;
	}
	if (a3 > largest)
	{
		largest = a3;
	}
	else if (a3 < smallest)
	{
		smallest = a3;
	}
	printf("Largest Integer is %d\n",largest);
	printf("Smallest Integer is %d\n", smallest);
	system("pause");
	return 0;
	

}