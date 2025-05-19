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
    }

    bool flag = true;

    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i != j && arr[i][j] != 0)
                {
                    flag = false;
                }
            }
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
        printf("Yes, this is a diagonal matrix.\n");
    else
        printf("No, this is not a diagonal matrix.\n");

    return 0;
}
