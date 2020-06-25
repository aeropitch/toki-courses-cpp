#include <cstdio>
using namespace std;

int main() {
    int x1, y1, x2, y2, x, y;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = x1 - x2;
    y = y1 - y2;
    if (x < 0) {
        x *= -1;
    }
    if (y < 0) {
        y *= -1;
    }
    printf("%d\n", x + y);
}