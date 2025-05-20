#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int lastHoop = (n+1)/2;
        printf("%d\n", lastHoop);
    }
     
    return 0;
}