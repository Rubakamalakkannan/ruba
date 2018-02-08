#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("\n%d\t%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n%d\t%d",a,b);
return 0;
}
