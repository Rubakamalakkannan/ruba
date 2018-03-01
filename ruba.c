#include <stdio.h>

int main()
{
	int a,b,m=1;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		m=m*b;
		a=a/10;
		printf("%d",m);
	}
	return 0;
}
