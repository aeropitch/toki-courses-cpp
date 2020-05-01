#include <cstdio>
using namespace std;

int reverse(int x) {
    int temp = x, ret  = 0;
    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    
    return ret;
}

int main() {
    int A, B, C;
    scanf("%d %d", &A, &B);
    printf("%d\n", reverse(reverse(A) + reverse(B)));

    return 0;
}