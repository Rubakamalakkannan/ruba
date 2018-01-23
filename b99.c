#include <stdio.h>
     
    int main()
    {
    	int rem,n,count,arm=0;
    	scanf("%d",&n);
    	count=0;
    	while(n!=0)
    	{
    		rem=n%10;
    		arm=arm+(rem*rem*rem);
    	n=n/10;

    	}
    	printf("%d",arm);
    	return 0;
    }

