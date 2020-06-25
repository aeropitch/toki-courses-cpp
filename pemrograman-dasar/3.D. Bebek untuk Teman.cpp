#include <cstdio>
using namespace std;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    printf("masing-masing %d\nbersisa %d\n", N / M, N % M);
}