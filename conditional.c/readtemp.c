#include<stdio.h>
int main()
{
	float Temp;

	printf("Enter the Temperature in centigrade :\n");
	scanf("%f",&Temp);

	if(Temp<0)
	{
		printf("freezing weather\n");
	}
	else if(Temp<=10)
	{
		printf("very cold weather\n");
	}
	else if(Temp<=20)
	{
		printf("cold weather\n");
	}
	else if(Temp<=30)
	{

		printf("it is normal\n");
	}
	else if(Temp<=40)
	{
		printf("it is hot\n");
	}
	else
	{
		printf("it is very hot\n");
	}

}
