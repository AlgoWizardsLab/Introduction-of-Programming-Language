#include <stdio.h>
int main() {
    int n = 3;
    for (int i = 0; i < n; i++) {
        printf("Start of row i = %d\n", i);
        for (int j = 0; j < i+1; j++) {
            printf("  Inner loop: i = %d, j = %d\n", i, j);
        }
        printf("End of row i = %d\n\n", i);
    }
    return 0;
}
