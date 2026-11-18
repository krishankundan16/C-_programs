#include<stdio.h>
int main()
{
	int a[5];
	int i,high,sh;
	for(i=0;i<5;i++)
	{
		printf("enter the element:\n");
		scanf("%d",&a[i]);
	}
	high=a[0];
	sh=0;
	for(i=1;i<5;i++)
	{
		if(a[i]>high)
		{
			sh=high;
			high=a[i];
		}
		else if(a[i]>sh && a[i]!=high)
		{
			sh=a[i];
		}
	}
	printf("secondhighest=%d\n",sh);
}
