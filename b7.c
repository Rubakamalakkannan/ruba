#include <stdio.h>

int main()
{
int a,n,count,e;
scanf("%d",&n);
for(a=1;a<=n;a++)
for(e=5;e<=n/2;e++)
{
if(n % e == 0)
count++;
break;
}
if(count == 0 && n !== 1)
{	
printf("%d",n);
}
return 0;
}
