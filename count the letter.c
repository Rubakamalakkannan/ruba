#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i,count=0;
scanf("%s",&str[i]);
while(str[i]!='\0')
{
if((str[i]>='a')&&(str[i]<='z'))
{
count++;
}
i++;
}
printf("%d",count);
return 0;
}
