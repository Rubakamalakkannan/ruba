#include<stdio.h>
int main()
{
	int i,n, max=0,a[n];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=n;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
		
	}
	}

printf("the largest number is %d",max);
return 0;
}

