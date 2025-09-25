/*#include <stdio.h>
int main() {
    int hiz = 0 ;
    int ivme = 10;
    while (hiz<100) {
        hiz = ivme + hiz ;
        printf("hiz:%d",hiz);
    }

}
*/
#include <stdio.h>
int main() {
    int sayac;
    int not;
    int toplamnot;
    int ogrencisayisi = 10 ;
    while (sayac <ogrencisayisi);
    {
        scanf("%d",not);
        printf("not giriniz");
        sayac = sayac + 1 ;
        toplamnot=toplamnot + not;
    }
    float ortalama = toplamnot / ogrencisayisi;
    printf("%.2f",ortalama);or

}