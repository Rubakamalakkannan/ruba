#include<stdio.h>
int main()
{
int a,n,count;
scanf("%d",&n);
for(a=1,a<=n-1,a++)
{
if(n%a == 0)
c++;
}
if(c==2)
{	
printf("%d is not a prime number",n);
}
else
{
printf("%d is a prime nummber",n);
}
return 0;
}
