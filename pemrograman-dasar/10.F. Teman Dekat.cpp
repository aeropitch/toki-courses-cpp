#include <cstdio>
#include <cmath>
using namespace std;

int func(int Xi, int Yi, int Xj, int Yj, int D) {
    return pow(abs(Xj - Xi), D) + pow(abs(Yj - Yi), D);
}

int main() {
    int N, D, min, max, temp;
    scanf("%d %d", &N, &D);
    int X[N], Y[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X[i], &Y[i]);
    }
    min = func(X[0], Y[0], X[1], Y[1], D);
    max = min;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            temp = func(X[i], Y[i], X[j], Y[j], D);
            if (temp < min) {
                min = temp;
            }
            if (temp > max) {
                max = temp;
            }
        }
    }
    printf("%d %d\n", min, max);

    return 0;
}