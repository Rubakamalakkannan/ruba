    #include <stdio.h>
     
    int main()
    {
    	int a,n,count;
    	scanf("%d",&n);
    	count=0;
    	while(n!=0)
    	{
    		a=n%10;
    		count++;
    		n=n/10;
    	}
    	printf("%d",count);
    	return 0;
    }
