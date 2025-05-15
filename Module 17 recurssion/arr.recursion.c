#include<stdio.h>
void print_array (int arr[], int size,int idx){
    if(idx == size) return;
    printf("%d \n",arr[idx]);
    print_array(arr,size,idx + 1);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    print_array(arr,n,0);
    
    return 0;
}