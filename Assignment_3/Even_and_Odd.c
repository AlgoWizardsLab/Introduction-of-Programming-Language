#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int i = 0;

    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    int even = 0, odd = 0;
    i = 0;

    while (i < n)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        i++;
    }

    printf("%d %d\n", even, odd);
}

int main()
{
    odd_even();
    return 0;
}
