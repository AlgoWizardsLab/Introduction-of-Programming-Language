#include<stdio.h>

void print_recursive(int i){
    if(i==6){
        return;
    }
    printf("%d \n",i);
    print_recursive(i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_recursive(n);
    return 0;
}