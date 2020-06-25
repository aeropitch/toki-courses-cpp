#include <cstdio>
using namespace std;

int main() {
    int N, M, P, temp;
    scanf("%d %d %d", &N, &M, &P);
    int A[N][M], B[M][P];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            temp = 0;
            for (int k = 0; k < M; k++) {
                temp += A[i][k] * B[k][j];
            }
            printf("%d", temp);
            if (j < P - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
}