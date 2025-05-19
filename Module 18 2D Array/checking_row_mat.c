#include <stdio.h>
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
    if (row == 1)
        printf("Yes this is a row Matrix");
    if (row == col)
        printf("Yes this is a Square Matrix");
    if (col == 1)
        printf("Yes, This is a Col Matrix");
    else
        printf("No");

    return 0;
}