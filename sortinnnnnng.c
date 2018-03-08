#include<stdio.h>
int main()
{
int num[100],i,j,t;
for(i=1;i<=10;i++)
scanf("%d",&num[i]);
for(i=1;i<=10;i++)
{
	for(j=i+1;j<=10;j++)
	{
		if(num[i]>num[j])
		{
		t=num[i];
		num[i]=num[j];
		num[j]=t;
	}
	}
}
for(i=1;i<=10;i++){
printf("%d",num[i]);
}

	return 0;
}
