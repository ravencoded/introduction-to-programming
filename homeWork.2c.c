#include <stdio.h>
#include <math.h>

int main() {
    long double tekSayilarinCarpimi = 1.0L;
    printf("1'den 100'e kadar olan tek sayilarin carpimi");
    for (int i = 1;i <= 100;i++)
    {
if (i %2 != 0) {
    tekSayilarinCarpimi *= i;
}
    }
    printf("%2Le\n",tekSayilarinCarpimi);
    printf("------------------------------------------------------------\n");
    long double çiftsayilarinCarpimi = 1.0L;
    printf("1'den 100'e kadar olan cift sayilarin carpimi: ");
    for (int j = 1;j <= 100;++j)
    {
        if (j %2==0) {
            çiftsayilarinCarpimi *= j;
        }
    }
    printf("%2Le\n",çiftsayilarinCarpimi);
    return 0;
}
