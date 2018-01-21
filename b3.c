#include <stdio.h>

int main()
{
int a,n,count ;
scanf("%d",&n);
count=0;
while(n!=0)
{
	a=n%10;
	
	n=n/10;
	printf("%d",a);
}
	return 0;
}
