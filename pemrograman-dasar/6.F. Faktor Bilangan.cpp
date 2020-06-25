#include <cstdio>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }
}