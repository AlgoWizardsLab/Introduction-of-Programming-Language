#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //print the array reverse way ( odd index only);
    for(int i=n-1; i>=0; i--){
        // printf("%d ", arr[i]);
        if(i%2 != 0){
            printf("%d ", arr[i]);
        }
    }
     
    return 0;
}