
#include <stdio.h>
main() {
    int array[3][3];
    int toplam = 0 ;
    float ortalama = 0 ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
            printf("matrisin degerini giriniz:%d\n", array[i][j]);
            toplam+=array[i][j];
        }
    }
    printf("\n");
    printf("toplam:%d\n", toplam);
    ortalama = toplam/9.0;
    printf("ortalama: %f\n", ortalama);
    return 0;
}
