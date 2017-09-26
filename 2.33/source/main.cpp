//共乘節約計算工具//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float mile,price,dm,parking,tolls,total;
	printf("Please enter your daily mileage:");
	scanf_s("%f",&dm);
	printf("Please enter the price per gallon of gasoline:");
	scanf_s("%f",&price);
	printf("Please enter miles per gallon:");
	scanf_s("%f",&mile);
	printf("Please enter daily parking fee:");
	scanf_s("%f",&parking);
	printf("Please enter daily tolls:");
	scanf_s("%f",&tolls);
	total = (dm / mile)*price + parking + tolls;
	printf("The cost of driving:%0.3f",total);
	system("pause");
	return 0;
}