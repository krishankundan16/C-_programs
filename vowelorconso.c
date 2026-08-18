#include<stdio.h>
int main()
{
	char k;
	printf("Enter the character\n :");
	scanf("%c",&k);

	if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u'||k=='A'||k=='E'||k=='I'||k=='O'||k=='U')
	{
		printf("%c is vowel\n",k);
	}
	else{
		printf("%c this alphabet is consonant\n",k);
	}
}
