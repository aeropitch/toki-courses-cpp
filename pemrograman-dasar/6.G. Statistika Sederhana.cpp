#include <cstdio>
using namespace std;

int main() {
    int N, A, B, temp;
    scanf("%d", &N);
    if (N > 1) {
        scanf("%d %d", &A, &B);
        if (A < B) {
            temp = A;
            A = B;
            B = temp;
        }
        for (int i = 1; i <= N - 2; i++) {
            scanf("%d", &temp);
            if (temp > A) {
                A = temp;
            } else if (temp < B) {
                B = temp;
            }
        }
    } else {
        scanf("%d", &A);
        B = A;
    }
    printf("%d %d\n", A, B);

    return 0;
}