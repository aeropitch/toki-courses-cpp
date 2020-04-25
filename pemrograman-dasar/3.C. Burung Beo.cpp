#include <cstdio>
#include <string>
using namespace std;

int main() {
    char temp[100];
    scanf("%[^\n]", temp);
    string s = temp;
    printf("%s\n", s.c_str());
    
    return 0;
}