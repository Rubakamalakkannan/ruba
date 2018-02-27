#include <stdio.h>

int main()
{
	int a,n;
	scanf("%d",&n);
	a=n%13;
	if(a==0)
	{
		printf("%d yes",a);
	}
	else
	{
		printf("%d no",a);
	}
	return 0;
}
