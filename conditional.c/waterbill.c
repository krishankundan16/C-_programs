#include<stdio.h>
int main()
{
	float gallons,Totalwaterbill,add,Bill;
	printf("Enter  the number of gallons :");
	scanf("%f",&gallons);

	if(gallons<=50)
	{
		Bill = gallons * 1.00;
	}
	else if(gallons<=150)
	{
		Bill = gallons * 1.50;
	}
	else if(gallons<=250)
	{
		Bill = gallons * 2.00;
	}
	else
	{
		Bill = gallons * 2.50;
	}
	add = Bill * 0.15;

	Totalwaterbill = Bill + add;
	printf("Total WaterBill =%.2f",Totalwaterbill);
}
