#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];

    int i = 0;
    while (i < n)
    {
        scanf(" %c", &arr[i]); // space before %c
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c \n", arr[i]);
    }

    return 0;
}
