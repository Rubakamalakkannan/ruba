#include <stdio.h>
int main()
{
    int n, r=0, remainder;
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        r= r*10 + remainder;
        n =n/10;
    }
    printf("r=%d", r);
    return 0;
}

