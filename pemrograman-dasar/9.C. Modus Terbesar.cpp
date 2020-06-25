#include <cstdio>
using namespace std;

int main() {
    int N, temp, mode, modecount;
    scanf("%d", &N);
    int arr[2][N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        if (i != 0) {
            for (int j = 0; j < i; j++) {
                if (temp == arr[0][j]) {
                    arr[1][j]++;
                    arr[0][i] = -1;
                    arr[1][i] = -1;
                    break;
                } else if (j == i - 1) {
                    arr[0][i] = temp;
                    arr[1][i] = 0;
                }
            }
        } else {
            arr[0][i] = temp;
            arr[1][i] = 0;
        }
    }
    mode = arr[0][0];
    modecount = arr[1][0];
    for (int i = 1; i < N; i++) {
        if (modecount < arr[1][i]) {
            mode = arr[0][i];
            modecount = arr[1][i];
        } else if (modecount == arr[1][i] && mode < arr[0][i]) {
            mode = arr[0][i];
            modecount = arr[1][i];
        }
    }
    printf("%d\n", mode);
}