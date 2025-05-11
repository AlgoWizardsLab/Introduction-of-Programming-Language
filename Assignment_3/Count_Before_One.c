#include <stdio.h>
int count_before_one(int arr[], int n)
{
    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] != 1)
            cnt++;
        else
            break;
        i++;
    }
    return cnt;
}
int main()
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

    int count = count_before_one(arr, n);
    printf("%d",count);

    return 0;
}