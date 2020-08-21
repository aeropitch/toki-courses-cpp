#include <cstdio>
using namespace std;

int N, K, a[9];
bool b[9];

void permut(int depth = 0) {
    if (depth < K) {
        for (int i = depth > 0 ? a[depth - 1] : 0; i < N; i++) {
            if (!b[i]) {
                b[i] = 1;
                a[depth] = i + 1;
                permut(depth + 1);
                b[i] = 0;
            }
        }
    } else {
        for (int i = 0; i < K; i++) {
            printf("%d", a[i]);
            printf(i < K - 1 ? " " : "\n");
        }
    }
}

int main() {
    scanf("%d %d", &N, &K);
    permut();
}