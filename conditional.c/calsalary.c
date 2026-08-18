#include<stdio.h>
int main()
{
	float BasicSalary,hra,da,GrossSalary;
	printf("Enter the Basic Salary;");
	scanf("%f",&BasicSalary);

	if(BasicSalary<=10000)
	{
		hra = BasicSalary * 0.20;
		da = BasicSalary * 0.80;
	}
	else if(BasicSalary<=20000)
	{
		hra = BasicSalary * 0.25;
		da = BasicSalary * 0.90;
	}
	else
	{
		hra = BasicSalary * 0.30;
		da = BasicSalary * 0.95;
	}
	printf("Basic Salary =%.2f\n",BasicSalary);
	printf("Hra =%.2f\n",hra);
	printf("da =%.2f\n",da);
	GrossSalary = BasicSalary + hra + da;
	printf("GrossSalary =%.2f\n",GrossSalary);
}
