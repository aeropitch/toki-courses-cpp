#include <cstdio>
#include <string>
using namespace std;

int M[128][128], count = 0;
string pos[128*128];

bool homogen(int p, int r, int c) {
    int val = M[r][c];
    for (int i = r; i < r + p; i++)
        for (int j = c; j < c + p; j++)
            if (M[i][j] != val)
                return false;
    return true;
}

void quadtree(int p, int r = 0, int c = 0, string s = "") {
    if (!homogen(p, r, c)) {
        quadtree(p/2, r, c, s + "0");
        quadtree(p/2, r, c + p/2, s + "1");
        quadtree(p/2, r + p/2, c, s + "2");
        quadtree(p/2, r + p/2, c + p/2, s + "3");
    } else {
        if (M[r][c] == 1) {
            pos[count] = "1" + s;
            count++;
        }
    }
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int maxRC = max(R, C);
    int pow2 = 1;
    while (pow2 < maxRC)
        pow2 *= 2;
    for (int i = 0; i < pow2; i++)
        for (int j = 0; j < pow2; j++)
            M[i][j] = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &M[i][j]);
    quadtree(pow2);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
        printf("%s\n", pos[i].c_str());
}