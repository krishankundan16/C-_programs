#include<stdio.h>
int main()
{
	float Height;

	printf("Enter the height\n");
	scanf("%f",&Height);

	if(Height<150)
	{
		printf("Height of person is Dwraf\n");
	}
	else if(Height<165)
	{
		printf("Height of person is Average height\n");
	}
	else
	{
		printf("Height of person is Tall");
	}

}
