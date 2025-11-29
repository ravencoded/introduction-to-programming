
#include<stdio.h>
int main() {
    int array[10];
    int toplam=0;
    printf("sayilari giriniz\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d",&array[i]);
        printf("%d. sayi:%d\n",i+1,array[i]);
        if ( array[i] %2 == 0) {
toplam+=array[i];
        }
    }
    printf("cift sayilarin toplami:%d",toplam);
    return 0;
}
