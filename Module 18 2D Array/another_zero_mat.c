#include<stdio.h>
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
    int total_elements = row * col;
    int total_zero = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == 0){
                total_zero++;
            }
        }
        printf("\n");
        
    }
    if(total_elements == total_zero)printf("Yes, this is a zero matrix");
    else printf("Not Zero matrix");
    

    return 0;
}