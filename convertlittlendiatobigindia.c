#include<stdio.h>
int main()
{
	int x=1;
	char *p=&x;
	int num=0x12345678;
	char *q,ch=0;
	q=&num;
	int i,j;
	if(*p)
	{
	for(i=0,j=3;i<j;i++,j--)
	{
		ch=*(q+i);
		*(q+i)=*(q+j);
		*(q+j)=ch;
	}

	}
	printf("%x",num);
}
	
