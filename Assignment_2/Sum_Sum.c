#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val, pos_sum = 0, neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (val > 0)
        {
            pos_sum += val;
        }
        else
            neg_sum += val;
    }
    printf("%d %d", pos_sum, neg_sum);
    return 0;
}