#include <stdio.h>
#include <string.h>
int main() {
    char kelime[10]="masa";
    int uzunluk=strlen(kelime);
    for (int i = 0; i < uzunluk; i++) {
        printf("%c",kelime[i]);
    }
}