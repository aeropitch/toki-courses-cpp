#include <cstdio>
#include <string>
using namespace std;

bool palindrom(string s) {
    if (s.length() > 1) {
        return s[0] == s[s.length() - 1] && palindrom(s.substr(1, s.length() - 2));
    } else {
        return 1;
    }
}

int main() {
    char cS[101];
    scanf("%s", cS);
    string S = cS;
    if (palindrom(S)) {
        printf("YA\n");
    } else {
        printf("BUKAN\n");
    }
}