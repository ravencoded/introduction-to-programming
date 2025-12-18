#include <stdio.h>
#include<math.h>
int basamaksayisi(int girilen_sayi) {
    int sayac = 0;
    while (girilen_sayi!=0) {
        girilen_sayi/=10 ;
        sayac++ ;
    }
    return sayac;
}
int this_is_armstrong(int girilen_sayi) {
    int n = basamaksayisi(girilen_sayi);
    int toplam=0 ;
    int orijinalsayi=girilen_sayi;

    while (girilen_sayi!=0) {
        double sayi = girilen_sayi % 10 ;
        toplam+=pow(sayi, n);
        girilen_sayi=girilen_sayi/10 ;
    }
    return (toplam==orijinalsayi);
}
int main() {
    int girilen_sayi;
    printf("----girilen sayinin armstrong olup olmadigini kontrol eden program---- \n");
    printf("                         bir sayi giriniz:");
    scanf("%d",&girilen_sayi);
    if (this_is_armstrong(girilen_sayi)) {
printf("bu bir armstrong sayidir");
    }
    else {
        printf("bu bir armstrong sayi değildir");
    }
    return 0;
}