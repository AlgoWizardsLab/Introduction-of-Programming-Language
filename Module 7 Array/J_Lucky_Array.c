#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // find the min element :

    int min_num = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_num)
        {
            min_num = arr[i];
        }
    }

    // count how many times min_num occurs :
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_num)
        {
            count++;
        }
    }

    (count % 2 == 1) ? printf("%s", "Lucky") : printf("%s", "Unlucky");
    return 0;
}