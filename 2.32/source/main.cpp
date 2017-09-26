//≠p∫‚BMI//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	float w,h,BMI;
	printf("Please choose pounds(0) or kilograms(1):");
	scanf_s("%d",&c);
	if (c == 0)
	{
		printf("Please enter your weight(pounds):");
		scanf_s("%f",&w);
		printf("Please enter your height(inches):");
		scanf_s("%f",&h);
		BMI = (w * 703) / (h*h);
	}
	else if (c == 1)
	{
		printf("Please enter your weight(kilograms):");
		scanf_s("%f",&w);
		printf("Please enter your height(meter):");
		scanf_s("%f",&h);
		BMI = w / (h*h);
	}
	if (BMI < 18.5) { printf("You are underweight\n"); }
	else if ((24.9>BMI)&&(BMI>18.5)) { printf("You are normal\n"); }
	else if ((29.9>BMI)&&(BMI>25)) { printf("You are overweight\n"); }
	else if (BMI>30) { printf("You are obese\n"); }
	system("pause");
	return 0;
}