#include <cstdio>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int N, T;
    scanf("%d", &N);
    int arr[2][N];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char P, Q;
        int x, y;
        scanf(" %c %d %c %d", &P, &x, &Q, &y);
        int p = P - 'A';
        int q = Q - 'A';
        swap(arr[p][x - 1], arr[q][y - 1]);
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", arr[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}