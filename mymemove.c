#include<stdio.h>
#include<string.h>
void *mymemove(char *dest,char *src,int L)
{
	if(dest<src)
	{
		for(int i=0;i<L;i++)
			dest[i]=src[i];
	}
	else
	{
		for(int i=L;i>=0;i--)
			dest[i]=src[i];
	}
	return dest;
}
int main()
{
	char src[100];
	int choice,n;
	printf("Enter the string:");
	scanf("%[^\n]s",src);
	printf("enter the number of character:\n");
	scanf("%d",&n);
	printf("1.move right\n2.move left\n");
	printf("enter the choice:\n");
	scanf("%d",&choice);
	if(choice==1)
		mymemove(src+n,src,strlen(src)+1);
	else if(choice==2)
	        mymemove(src,src+n,strlen(src)-n+1);
	else
	{
		printf("invalid choice\n");
		return 0;
	}
	printf("After memove:%s\n",src);
}
