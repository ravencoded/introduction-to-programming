#include <stdio.h>
int main() {
    int aklimdakisayi = 50 ;
    int tahmin;
    printf("sayi tahmin oyununa hosgeldiniz");
    printf("1 ile 100 arasında bir sayı tuttum aklımdanbulmaya çalış");
    do {
        printf("sayiyi tahmin edin:\n ");
        scanf("%d",&tahmin);
        if (tahmin > aklimdakisayi) {
            printf("daha düsük bir sayi giriniz");
        }
        else if (tahmin < aklimdakisayi) {
            printf("daha yüksek bir sayi giriniz");
        }
        else{
            printf("doğru tahmin ettin");

        }
        while (aklimdakisayi==tahmin);



        return 0;
    }
