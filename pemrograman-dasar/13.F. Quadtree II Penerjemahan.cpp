#include <cstdio>
#include <string>
using namespace std;

int M[128][128], N;
string pos[128*128];

bool m1(string s) {
    for (int i = 0; i < N; i++)
        if (pos[i] == s)
            return true;
    return false;
}

void quadtree(int p, int r, int c, string s) {
    if (m1(s)) {
        for (int i = r; i < r + p; i++)
            for (int j = c; j < c + p; j++)
                M[i][j] = 1;
    }
    if (p > 1) {
        quadtree(p/2, r, c, s + "0");
        quadtree(p/2, r, c + p/2, s + "1");
        quadtree(p/2, r + p/2, c, s + "2");
        quadtree(p/2, r + p/2, c + p/2, s + "3");
    }
}

int main() {
    char c[8];
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        scanf("%[^\n]\n", c);
        pos[i] = c;
    }
    int R, C, p = 1;
    scanf("%d %d", &R, &C);
    int maxRC = max(R, C);
    while (p < maxRC)
        p *= 2;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            M[i][j] = 0;
    quadtree(p, 0, 0, "1");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}