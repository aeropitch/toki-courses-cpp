#include <cstdio>
#include <cmath>
using namespace std;

int A, B, K, x;

int f(int k) {
    if (k > 0) {
        return abs(A * f(k - 1) + B);
    } else {
        return x;
    }
}

int main() {
    scanf("%d %d %d %d", &A, &B, &K, &x);
    printf("%d\n", f(K));
}