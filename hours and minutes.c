#include <stdio.h>

int main()
{
	int t,h,m;
	scanf("%d",&t);
	h=t/60;
	m=t%60;
	printf("hours %d\n minutes %d\n",h,m);
	return 0;
}
