#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)  
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int target;
    scanf("%d", &target);
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)  
        {
            if (arr[i][j] == target)
            {
                flag = true;
                break;
            }
        }
        if (flag) break;
    }

    if (flag)
        printf("will not take number");
    else
        printf("will take number");

    return 0;
}
