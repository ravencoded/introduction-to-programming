#include <stdio.h>
#include <string.h>
#include <conio.h>
void text();
void text1(char*);
int main() {
    char character[]= "mert\n";
    text();
    text1(character);
    printf("gecmek icin bir tusa basiniz\n");
    getch();
    return 0 ;
}
void text() {
    printf("Hello World!\n");
    return;
}
void text1(char *s) {
    printf("%s", s);
}