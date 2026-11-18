#include<stdio.h>
int main()
{
	int i,small;
	int a[5]={20,30,10,40,50};
	for(int i=0;i<5;i++)
	{
	  printf("%d,",a[i]);
	}
	printf("\n");
	small=a[0];
	for( i=1;i<5;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("smallest ele:=%d",small);
}


