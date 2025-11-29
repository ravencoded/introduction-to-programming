/*
#include <stdio.h>

int araliktakiToplam(int baslangic, int bitis) {
    if (baslangic > bitis) {
        return 0;
    }

    int terimSayisi = (bitis - baslangic) + 1;
    int toplam = terimSayisi * (baslangic + bitis) / 2;

    return toplam;
}

int main() {
    int ilkSayi, sonSayi;

    printf("Toplanacak araligin baslangic ve bitis sayilarini girin (or: 5 30): ");
    scanf("%d %d", &ilkSayi, &sonSayi);
    if (ilkSayi > sonSayi) {
     printf("baslangic sayisi bitis sayisinden buyuk olamaz");
    }
else {
    int toplam = araliktakiToplam(ilkSayi, sonSayi);

    printf("\n%d ile %d arasindaki sayilarin toplami: %lld\n", ilkSayi, sonSayi, toplam);
}
    return 0;
}
*/