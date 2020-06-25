#include <cstdio>
#include <cmath>
using namespace std;

void func(int A, int B, int &x) {
    x = abs(A * x + B);
}

int main() {
    int A, B, K, x;
    scanf("%d %d %d %d", &A, &B, &K, &x);
    for (int i = 0; i < K; i++) {
        func(A, B, x);
    }
    printf("%d\n", x);
}