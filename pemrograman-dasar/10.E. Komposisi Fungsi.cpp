#include <cstdio>
// fungsi abs() juga dapat diakses
// menggunakan STL <cmath>
using namespace std;

int abs(int x) {
    if (x < 0) {
        return x * -1;
    } else {
        return x;
    }
}

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
    
    return 0;
}