#include <stdio.h>

int main() {
    int n, min_num, min_pos;
    scanf("%d", &n);

    int arr;
    scanf("%d", &arr); 
    min_num = arr;
    min_pos = 1;

    for (int i = 2; i <= n; i++) {
        scanf("%d", &arr);
        if (arr < min_num) {
            min_num = arr;
            min_pos = i;
        }
    }

    printf("%d %d\n", min_num, min_pos);
    return 0;
}
