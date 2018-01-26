#include <stdio.h>

int main()
{
	int a,b;
	char c;
	printf("enter  an opertators");
	scanf("%d\t%d\n",&a,&b);
	scanf("%c",&c);
	
	switch(c)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
	
			printf("%d",a-b);
			break;
		case '*':
	
			printf("%d",a*b);
			break;
		case '/':

			printf("%d",a/b);
			break;
		default:
			printf("no operation");
		
	}
return 0;
}
