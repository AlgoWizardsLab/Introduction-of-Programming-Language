#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b,x;
        scanf("%d %d %d", &a,&b,&x);
        
        int achievedValue = b -a;
        int time = achievedValue/x;
        printf("%d\n",time);
    }
    return 0;
}