#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter the first side:");
	scanf("%d",&side1);
	printf("Enter the second side:");
	scanf("%d",&side2);
	printf("Enter the third side:");
	scanf("%d",&side3);;

	if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
	{
	
		printf("it is valid");
	}
	else{
		printf("it is not valid");
	}
}
