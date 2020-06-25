#include <cstdio>
using namespace std;

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int arr[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            printf("%d", arr[j][i]);
            if (j > 0) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
}