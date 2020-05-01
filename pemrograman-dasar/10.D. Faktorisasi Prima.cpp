#include <cstdio>
using namespace std;

void primeFactor(int x) {
    int temp = 0, pow = 1;
    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            if (temp == i) {
                if (temp < x) {
                    pow++;
                } else {
                    printf("^%d", pow + 1);
                    break;
                }
            }
            if (temp > 0) {
                if (pow == 1) {
                    printf(" x %d", i);
                } else if (temp != i) {
                    printf("^%d x %d", pow, i);
                    pow = 1;
                }
            } else {
                printf("%d", i);
            }
            temp = i;
            x /= i;
            i--;
        }
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    primeFactor(N);
    
    return 0;
}