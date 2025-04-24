#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    int arr[n];

    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    int x = 0;
    int y = 0;

    while (i < n)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            x++;
        }
        else if (arr[i] % 2 == 0)
        {
            x++;
        }
        else if (arr[i] % 3 == 0)
        {
            y++;
        }
        i++;
    }
    printf("%d %d", x,y);

    return 0;
}
