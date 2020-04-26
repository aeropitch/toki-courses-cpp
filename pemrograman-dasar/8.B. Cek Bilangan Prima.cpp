#include <cstdio>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int temp;
        bool prime = true;
        scanf("%d", &temp);
        if (temp > 1) {
            int j = 2;
            while (j * j <= temp) {
                if (temp % j == 0) {
                    prime = false;
                    break;
                }
                j++;
            }
        } else {
            prime = false;
        }
        if (prime) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }

    return 0;
}