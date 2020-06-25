#include <cstdio>
using namespace std;

int main() {
    char temp[100];
    while (scanf("%s", temp) != EOF) {
        scanf("%[^\n]\n", temp);
        printf("%s\n", temp);
    }
}