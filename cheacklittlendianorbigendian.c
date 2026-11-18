#include<stdio.h>
int main()
{
	int x=1;
	char *p=&x;
	if(*p)
		printf("Little endian\n");
	else
		printf("Big endian\n");
}
