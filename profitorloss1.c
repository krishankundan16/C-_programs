#include<stdio.h>
int main()
{
	float cp,sp,amount;
	printf("Enter the cost price\n");
	scanf("%f",&cp);
	printf("Enter the selling price\n");
	scanf("%f",&sp);

	if(sp>cp)
	{
		amount=sp-cp;
		printf("profit= %.2f\n",amount);
	}
	else if(cp>sp)
	{
		amount=cp-sp;
		printf("loss=%.2f",amount);
	}
	else
	{
		printf("no profit and no loss");
	}
}

