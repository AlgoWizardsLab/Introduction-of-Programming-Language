#include <stdio.h>

int main() {
    char a[101], b[101];

    scanf("%s %s", a, b);

    for (int i = 0; ; i++) {
        if (a[i] == '\0' && b[i] == '\0') {
            printf("Both are equal");
            break;
        }
        if (a[i] == '\0') {
            printf("A is smaller");
            break;
        }
        if (b[i] == '\0') {
            printf("A is greater");
            break;
        }
        if (a[i] < b[i]) {
            printf("A is smaller");
            break;
        }
        if (a[i] > b[i]) {
            printf("A is greater");
            break;
        }
    }

    return 0;
}
