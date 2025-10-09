
#include <stdio.h>
int main() {
    int f1 =0, f2 =1, sıradakisayi = f1 ;
    printf("300e kadar fibonacci sayıları");
while (sıradakisayi < 300) {
    printf("%d\n",sıradakisayi);
    f1 = f2;
    f2 = sıradakisayi;
    sıradakisayi = f1 + f2;

}
    printf("\n");
    return 0;
}

