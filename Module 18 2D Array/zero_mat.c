#include <stdio.h>
#include <stdbool.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    bool flag = false;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                flag = true;
            }
            else flag = false;
        }
    }

    if (flag)
        printf("Yes, this is zero matrix");
    else
        printf("No, this is not a zero mat");

    return 0;
}