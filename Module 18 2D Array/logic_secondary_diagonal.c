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
                if (i + j == row - 1)
                {
                    continue;
                }
                if(arr[i][j] != 0)
                {
                    flag = false;
                }
            }
        }
    }
    else flag = false;

    if(flag) printf("Secondary Diagonal");
    else printf("Not a Secondary Diagonal");

    return 0;
}