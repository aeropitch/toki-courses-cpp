#include <cstdio>
using namespace std;

void draw(int n) {
    if (n > 0) {
        draw(n - 1);
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
        draw(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    draw(N);
}