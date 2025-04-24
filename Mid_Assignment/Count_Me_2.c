#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int length = strlen(str);
    int i = 0;
    int consonant_count = 0;
    while (i < length)
    {

        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            consonant_count++;
        }
        i++;
    }
    printf("%d", consonant_count);
}