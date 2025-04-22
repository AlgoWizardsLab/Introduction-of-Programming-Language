#include <stdio.h>
int main()
{
    char newStr[100];
    int i = 0, length = 0;
    fgets(newStr, sizeof(newStr), stdin);

    while (newStr[i] != "\0" && newStr[i] != "\n")
    {
        length++;
        i++;
    }

    return 0;
}