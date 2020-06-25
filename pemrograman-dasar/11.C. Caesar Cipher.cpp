#include <cstdio>
#include <string>
using namespace std;

int main() {
    char cS[101];
    int K;
    scanf("%s\n%d", cS, &K);
    string S = cS;
    for (int i = 0; i < S.length(); i++) {
        S[i] = (S[i] - 'a' + K) % 26 + 'a';
    }
    printf("%s\n", S.c_str());
}