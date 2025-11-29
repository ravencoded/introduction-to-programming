
#include <stdio.h>
int main() {
    int matris[3][3];
    float determinant;
    printf("matristeki değerleri giriniz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("eleman:[%d][%d]\n", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
    double pozitifToplam =
        (matris[0][0] * matris[1][1] * matris[2][2]) +
        (matris[0][1] * matris[1][2] * matris[2][0]) +
        (matris[0][2] * matris[1][0] * matris[2][1]);
    double negatiftoplam =
        (matris[0][2] * matris[1][1] * matris[2][0]) +
        (matris[0][0] * matris[1][2] * matris[2][1]) +
        (matris[0][1] * matris[1][0] * matris[2][2]);
    printf("determinant = %2f\n", determinant);
    return 0 ;
}
