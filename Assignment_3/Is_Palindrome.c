#include <stdio.h>
#include <string.h>

int is_palindrome(char myStr[])
{
    int length = strlen(myStr);
    for (int i = 0; i < length / 2; i++)
    {
        if (myStr[i] != myStr[length - i - 1])
        {
            return 0; 
        }
    }
    return 1; 
}

int main()
{
    char myStr[1001];
    scanf("%s", myStr);
    int res = is_palindrome(myStr);
    if (res)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
