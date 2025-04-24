#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[100001];
        scanf("%s", str);
        int length = strlen(str);
        int i = 0;
        int capitalLetter_count = 0;
        int smallLetterCount = 0;
        int digit_count = 0;

        while (i < length)
        {

            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                capitalLetter_count++;
            }

            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                smallLetterCount++;
            }

            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit_count++;
            }

            i++;
        }
        printf("%d %d %d\n", capitalLetter_count, smallLetterCount, digit_count);
    }
}