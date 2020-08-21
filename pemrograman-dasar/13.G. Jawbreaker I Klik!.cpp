#include <cstdio>
using namespace std;

int A[25][25], M, N, T = 0;
bool C[25][25];

int jawbreaker(int x, int y, int a) {
    if (x >= 0 && x < M && y >= 0 && y < N)
        if (!C[x][y]) {
            C[x][y] = 1;
            if (A[x][y] == a)
                return 1 + jawbreaker(x - 1, y, a) + jawbreaker(x + 1, y, a) + jawbreaker(x, y + 1, a) + jawbreaker(x, y - 1, a);
            else return 0;
        } else return 0;
    else return 0;
}

int main() {
    int B, K;
    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    scanf("%d %d", &B, &K);
    T = jawbreaker(B , K, A[B][K]);
    printf("%d\n", T*(T - 1));
}