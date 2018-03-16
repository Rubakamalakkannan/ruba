#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],z[100],st,str;
	scanf("%s",x);
	scanf("%s",z);
	st=strlen(x);
	str=strlen(z);
	if(st==str)
	{
		printf("%s",z);
	}
	else
	{
		printf("%s",x);
	}
	return 0;
}
