#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int matrix[N][N];
    int primarySum = 0, secondarySum = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                primarySum += matrix[i][j];
            }
            if (i + j == N - 1) {
                secondarySum += matrix[i][j];
            }
        }
    }
    
    int difference = abs(primarySum - secondarySum);
    printf("%d\n", difference);
    
    return 0;
}
