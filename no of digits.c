#include <stdio.h>
     
    int main()
    {
    	int b,n,c;
    	scanf("%d",&n);
    	c=0;
    	while(n!=0)
    	{
    	b=n%10;
    		c++;
    		n=n/10;
    	}
    	printf("%d",c);
    	return 0;
    }
