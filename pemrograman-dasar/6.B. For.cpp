#include <cstdio>
using namespace std;

int main() {
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d\n", sum);
}