#include <stdio.h>
#include <string.h>
 

int isPalindrome(char str[])
{
  
    int l = 0;
    int h = strlen(str) - 1;
 
  
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");
}
int main()
{
    isPalindrome("abba");
    
   
    return 0;
}
