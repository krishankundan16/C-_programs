#include<stdio.h>
int main()
{
	int a[5];
	int i,high,ss;
	for(i=0;i<5;i++)
	{
		printf("enter the element:\n");
		scanf("%d",&a[i]);
	}
	high=a[0];
	ss=a[1];
	for(i=1;i<5;i++)
	{
		if(a[i]<high)
		{
			ss=high;
			high=a[i];
		}
		else if(a[i]<ss && a[i]!=high)
		{
			ss=a[i];
		}
	}
	printf("secondsmallest=%d\n",ss);
}
