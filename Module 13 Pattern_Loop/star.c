#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int k = 0; k < n - i - 1; k++) {
            printf(" ");
        }
        // Print stars with spaces between
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}

