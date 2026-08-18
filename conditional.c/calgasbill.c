#include<stdio.h>
int main()
{
	float Gas,Finalcost,cost,tax;
	printf("Enter the gas consumption in cubic meter :");
	scanf("%f",&Gas);

	if(Gas<=50)
	{
		cost = Gas * 0.75;
	}
	else if(Gas<=150)
	{
		cost = Gas * 1.00;
	}
	else if(Gas<=300)
	{
		cost = Gas * 1.25;
	}
	else
	{
		cost =  Gas * 1.50;
	}
	tax = cost * 0.10;

	Finalcost = cost + tax;
	printf("Total gas Bill =%.2f",Finalcost);
}
