#include <stdio.h>

int main()
{
	int N,A,D;
	scanf("%d%d%d",&N,&A,&D);
	printf("%d",N/2*(2*A+(N-1))*D);
	return 0;
}
