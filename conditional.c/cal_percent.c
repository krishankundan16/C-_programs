#include<stdio.h>
int main()
{
	float percentage,phy,chem,bio,maths,computer;

	printf("Enter the number of phy:\n chem:\n bio:\n maths:\n computer:\n");
	scanf("%f %f %f %f %f",&phy,&chem,&bio,&maths,&computer);

	percentage =(phy+chem+bio+maths+computer)/5;
	printf("%f is the percentage of student\n",percentage);

	if(percentage>=90)
	{
		printf("Grade A\n");
	}
	else if(percentage>=80)
	{
		printf("Grade B\n");
	}
	else if(percentage>=70)
	{
		printf("Grade C\n");
	}
	else if(percentage>=60)
	{

		printf("Grade D\n");
	}
	else if(percentage>=40)
	{
		printf("Grade E\n");
	}
	else 
	{
		printf("Grade F\n");
	}

}
