#include <cstdio>
#include <string>
using namespace std;

int main() {
    char cS[101];
    scanf("%s", cS);
    string S = cS;
    for (int i = 0; i < S.length(); i++) {
        S[i] < 97 ? S[i] += 32 : S[i] -= 32; // 32 = 'a' - 'A';
    }
    printf("%s\n", S.c_str());
}