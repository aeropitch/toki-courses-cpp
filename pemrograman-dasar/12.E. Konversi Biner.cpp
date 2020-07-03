#include <cstdio>
#include <string>
using namespace std;

string biner(int n) {
    if (n > 1) {
        if (n % 2 == 0) {
            return biner(n / 2) + "0";
        } else {
            return biner(n / 2) + "1";
        }
    } else {
        return "1";
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%s\n", biner(N).c_str());
}