#include<stdio.h>
unsigned int byte_swap(unsigned int n)
{
	unsigned int res=0;
	for(int i=0;i<4;i++)
	{
		res = (res<<8) | (n & 0xFF);
		n>>=8;
	}
	
	return res;
}


int main()
{
	unsigned int n;
	printf("enter the hexadecimal number: ");
	scanf("%x",&n);
	int c=byte_swap(n);
	printf("After Swapping :%x\n",c);


}
