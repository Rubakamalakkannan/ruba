#include<stdio.h>
#include<string.h>
void main()
{
    char s[150];
    int count = 0, a;
 
   
    scanf("%[^\n]s", s);
    for (a = 0;s[a] != '\0';++a)
    {
        if (s[a] == ' ')
            count++;    
    }
    printf("num of words: %d\n", count + 1);
}
