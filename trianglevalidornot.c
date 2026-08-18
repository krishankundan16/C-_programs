#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter the first angle:");
	scanf("%d",&angle1);
	printf("Enter the second angle:");
	scanf("%d",&angle2);
	printf("Enter the third angle:");
	scanf("%d",&angle3);
	sum=angle1+angle2+angle3;
	printf("sum=%d",sum);

	if(sum==180)
	{
	
		printf("it is valid");
	}
	else{
		printf("it is not valid");
	}
}
