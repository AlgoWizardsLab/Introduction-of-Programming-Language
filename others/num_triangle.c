#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    //outer-loop : 
    for(int i=0; i<n; i++){
        //inner-loop : 
        for(int j=0; j<i+1; j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}