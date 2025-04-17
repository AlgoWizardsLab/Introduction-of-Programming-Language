#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //take input for array by loop : 
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_num = arr[0];
    int min_pos = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_num) {
            min_num = arr[i];
            min_pos = i + 1; 
        }
    }

    printf("%d %d\n", min_num, min_pos);
    return 0;
}
