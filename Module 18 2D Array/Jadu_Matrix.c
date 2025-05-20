#include <stdio.h>

#define MAX_SIZE 100

int is_jadu_mat(int mat[MAX_SIZE][MAX_SIZE], int N, int M)
{
    if (N != M)
        return 0;

    for (int i = 0; i < N; i++)
    {
        if (mat[i][i] != 1)
            return 0;
    }

    for (int i = 0; i < N; i++)
    {
        if (mat[i][N - i - 1] != 1)
            return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j && j != N - i - 1 && mat[i][j] != 0)
                return 0;
        }
    }

    return 1;
}

int main()
{
    int N, M;
    int mat[N][M];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if (is_jadu_mat(mat, N, M))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
