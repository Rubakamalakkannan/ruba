#include <stdio.h>
int main()
{
	int a,b,c,vo,sur;
	scanf("%d%d%d",&a,&b,&c);
	sur=2*(a*b+b*c+c*a);
	vo=a*b*c;
	printf("%d\n",sur);
	printf("%d\n",vo);
	return 0;
}
