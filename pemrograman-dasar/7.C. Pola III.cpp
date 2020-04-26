#include <cstdio>
using namespace std;

int main() {
    int N, temp = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (temp > 9) {
                temp = 0;
            }
            printf("%d", temp);
            temp++;
        }
        printf("\n");
    }

    return 0;
}