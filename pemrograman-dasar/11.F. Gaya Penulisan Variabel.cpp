#include <cstdio>
#include <string>
using namespace std;

int main() {
    char cS[101];
    scanf("%s", cS);
    string S = cS;
    if (S.find('_') == -1) {
        for (int i = 0; i < S.length(); i++) {
            if (S[i] < '_') {
                S[i] += 32;
                S.insert(i, 1, '_');
            }
        }
    } else {
        for (int i = 0; S.find('_') != -1; i++) {
            if (S[i - 1] == '_') {
                S[i] -= 32;
                S.erase(i - 1, 1);
            }
        }
    }
    printf("%s\n", S.c_str());
}