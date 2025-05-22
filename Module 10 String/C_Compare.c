#include <stdio.h>

int main() {
    char x[21], y[21];
    scanf("%s %s", x, y);

    for (int i = 0; ; i++) {
        if (x[i] == '\0' && y[i] == '\0') {
            printf("%s", x);  // both are equal
            break;
        }
        if (x[i] == '\0') {
            printf("%s", x);  // x is shorter and all previous chars were equal
            break;
        }
        if (y[i] == '\0') {
            printf("%s", y);  // y is shorter and all previous chars were equal
            break;
        }
        if (x[i] < y[i]) {
            printf("%s", x);  // x is smaller
            break;
        }
        if (x[i] > y[i]) {
            printf("%s", y);  // y is smaller
            break;
        }
    }

    return 0;
}
