#include <cstdio>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        if (n % 2 == 0) {
            return n / 2 * factorial(n - 1);
        } else {
            return n * factorial(n - 1);
        }
    } else {
        return 1;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", factorial(N));
}