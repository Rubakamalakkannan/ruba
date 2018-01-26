#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a<c)||(a<b&&a>c))
	{
		printf("%d is the second greatest num",a);
	}
else if((b>c&&b<a)||(b<c&&b>a))
	{
		printf("%d is the second greatest num",b);
		
	}
	else if((c<a&&c>b)||(c>a&&c<b))
	{
    printf("%d is the second greatest num",c);
	}
	else
	{
		printf("all num are equal");
	}
	return 0;
}
