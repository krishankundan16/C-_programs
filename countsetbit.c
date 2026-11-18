#include<stdio.h>
int main()
{
	int n,cnt=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n)
	{
		if(n&1)
			cnt++;
		n>>=1;
	}
	printf("cnt:%d\n",n);
}
