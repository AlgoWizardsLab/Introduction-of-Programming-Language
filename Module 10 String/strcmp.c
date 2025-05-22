#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);

    int cmp = strcmp(a, b);

    if (cmp == 0)
        printf("Both are equal");
    else if (cmp < 0)
        printf("A is smaller");
    else
        printf("A is greater");

    return 0;
}
