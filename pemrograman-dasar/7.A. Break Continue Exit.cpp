#include <cstdio>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i % 10 != 0) {
            if (i != 42) {
                printf("%d\n", i);
            } else {
                printf("ERROR\n");
                break;
            }
        } else {
            continue;
        }
    }

    return 0;
}