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
        
    }
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j){
                primary_diagonal_sum += arr[i][j];
            }
        }
        
    }
    

    return 0;
}