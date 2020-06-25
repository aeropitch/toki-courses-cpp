#include <cstdio>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int temp, factor = 0;
        bool prime = true;
        scanf("%d", &temp);
        if (temp > 1) {
            int j = 2;
            while (j * j <= temp) {
                if (temp % j == 0) {
                    factor++;
                }
                j++;
            }
            if (factor >= 2) {
                prime = false;
            }
        }
        if (prime) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}