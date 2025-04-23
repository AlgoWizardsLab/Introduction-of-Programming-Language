#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int arr[n];
    char arr[n];

    int i =0; 
    while (i<n)
    {
        // scanf("%d", &arr[i]);
        scanf(" %c", &arr[i]);
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        
        // printf("%d \n", arr[i]);
        printf("%c \n", arr[i]);
    }
    
    
    return 0;
}