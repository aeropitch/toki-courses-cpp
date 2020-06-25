#include <cstdio>
using namespace std;

int main() {
    float N;
    int F, C;
    scanf("%f", &N);
    if (N == int(N)) {
        F = N;
        C = N;
    } else if (N >= 0) {
        F = N;
        C = N + 1;
    } else {
        F = N - 1;
        C = N;
    }
    printf("%d %d\n", F, C);
}