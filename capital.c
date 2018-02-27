#include <stdio.h>

int main(void)
{
	int i;
	char n[50];
	scanf("%[^\n]s",n);
	for(i=0;n[i]!='\0';i++)
	{
		if(i==0)
	{
		if(n[i]>='a'&& n[i]<='z')
		{
			n[i]=n[i]-32;
		}
		}
		if(n[i]=='')
		{
			++i;
			if(n[i]>='a'&& n[i]<='z')
			{
				n[i]=n[i]-32;
				
			}
		}
	}
	printf("%s",n);
	return 0;
	
}
