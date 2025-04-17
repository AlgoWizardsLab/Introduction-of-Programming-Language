#include <stdio.h>
int main()
{
    int num[10];
    int size = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < size; i++){
        scanf("%d", &num[i]);
        printf("%d\n", num[i]);
    } 
    return 0;
}
