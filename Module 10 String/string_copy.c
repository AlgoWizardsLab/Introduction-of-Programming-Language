#include<stdio.h>
#include<string.h>
int main()
{
    //declare char a and b : 
    char a[101],b[101];
    //take input : 
    scanf("%s %s", &a, &b);
    // printf("%s %s", a, b);
    
    int length = strlen(b);
    //copy element from b to a;
    for (int i = 0; i <= length; i++)
    {
        //logic : 
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    
    return 0;
}