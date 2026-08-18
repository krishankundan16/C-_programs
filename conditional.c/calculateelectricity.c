#include<stdio.h>
int main()
{
	float unit,add,bill,Totalelectricitybill;
	printf("Enter the electricity unit:");
	scanf("%f",&unit);

	if(unit<=50)
	{
		bill =  unit * 0.50;
	}
	else if(unit<=150)
	{
		bill = unit * 0.75;
		
	}
	else if(unit<=250)
	{
		bill = unit * 1.20;
		
	}
	else
	{
		bill = unit * 1.50;
	}
	printf("electricity unit =%.2f\n",unit);
	printf("electricity bill =%.2f\n",bill);
	add = bill * 0.20;
	printf("additional charge =%.2f\n",add);
	Totalelectricitybill = unit + add;
	printf("Totalelectricity bill =%.2f\n",Totalelectricitybill);
}
