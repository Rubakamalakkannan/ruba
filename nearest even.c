#include <stdio.h>
int main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=n-1;i<=n;i--)
            if(i%2==0)
            {
              printf("%d",i);
              break;
            }
            return 0;
}
