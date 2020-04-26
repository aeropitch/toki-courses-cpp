#include <cstdio>
using namespace std;

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++) {
        if (i % K != 0) {
            if (i < N) {
                printf("%d ", i);
            } else {
                printf("%d\n", i);
            }
        } else {
            if (i < N) {
                printf("* ");
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}