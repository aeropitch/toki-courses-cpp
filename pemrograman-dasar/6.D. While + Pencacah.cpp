#include <cstdio>
using namespace std;

int main() {
    int temp, sum = 0;
    while (scanf("%d", &temp) != EOF) {
        sum += temp;
    }
    printf("%d\n", sum);

    return 0;
}