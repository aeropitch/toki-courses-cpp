#include <cstdio>
using namespace std;

int N, a[9];
bool b[9], c;

void permut(int depth = 0) {
    if (depth < N) {
        for (int i = 0; i < N; i++) {
            if (!b[i]) {
                b[i] = 1;
                a[depth] = i + 1;
                permut(depth + 1);
                b[i] = 0;
            }
        }
    } else {
        c = 1;
        for (int i = 1; i < N - 1; i++) {
            if (!((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1]))) {
                c = 0;
                break;
            }
        }
        if (c) {
            for (int i = 0; i < N; i++) {
                printf("%d", a[i]);
            }
            printf("\n");
        }
    }
}

int main() {
    scanf("%d", &N);
    permut();
}