#include <cstdio>
#include <string>
using namespace std;

int main() {
    char cS1[101], cS2[101], cS3[101], cS4[101];
    scanf("%s\n%s\n%s\n%s", cS1, cS2, cS3, cS4);
    string S1 = cS1, S2 = cS2, S3 = cS3, S4 = cS4;
    S1.erase(S1.find(S2), S2.length());
    S1.insert(S1.find(S3) + S3.length(), S4);
    printf("%s\n", S1.c_str());
}