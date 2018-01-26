#include <stdio.h>

int main()
{
	int n,a,c;
	scanf("%d",&n);
	for(a=1;a<n;a++)
	{
		if(n%a == 0)
		c++;
	}
	if(c==2)
	{
		printf("%dthe number is prime number");
		
	}
	else
	{
		printf("%dthe number is not a prime number");
	}
	}
	retur
