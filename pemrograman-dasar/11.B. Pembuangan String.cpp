#include <cstdio>
#include <string>
using namespace std;

int main() {
    string S, T;
    char cS[101], cT[101];
    scanf("%s %s", cS, cT);
    S = cS;
    T = cT;
    while (S.find(T) != -1) {
        S.erase(S.find(T), T.length());
    }
    printf("%s\n", S.c_str());
}