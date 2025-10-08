#include <stdio.h>
int main() {
    int aklimdakisayi = 50 ;
    int tahmin;
    printf("sayi tahmin oyununa hosgeldiniz");
    printf("1 ile 100 arasinda bir sayi tuttum aklimdan bulmaya calıs");
    do {
        printf("sayiyi tahmin edin:\n ");
        scanf("%d",&tahmin);
        if (tahmin > aklimdakisayi) {
            printf("daha dusuk bir sayi giriniz");
        }
        else if (tahmin < aklimdakisayi) {
            printf("daha yuksek bir sayi giriniz");
        }
        else{
            printf("dogru tahmin ettin");

        }
    }while (aklimdakisayi=!tahmin);



        return 0;

    }
