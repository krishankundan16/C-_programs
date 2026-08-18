#include<stdio.h>
int main()
{
	float cp,sp,profit,loss;
	printf("Enter the value :");
	scanf("%f %f",&cp, &sp);
	if(profit=sp-cp)
	{
		printf("%f is profit",profit);
	}
	else if(loss=cp-sp)
	{
		printf("%f is loss",loss);
	}
	else
	{
		printf("program is completed");
	}
}
