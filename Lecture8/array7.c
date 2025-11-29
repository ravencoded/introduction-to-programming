
#include<stdio.h>
int main() {
    int array[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t%d\t\n",i,j);
            scanf("%d", &array[i][j]);
        }
    }
    int max = array[0][0];
    int min = array[0][0];
    int max_satir = 0;
    int max_sutun = 0;
    int min_satir = 0;
    int min_sutun = 0;
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 4; j++) {
           if (array[i][j] > max) {
               max = array[i][j];
               max_satir = i;
               max_sutun = j;
           }
           if (array[i][j] < min) {
               min = array[i][j];
               min_satir = i;
               min_sutun = j;
           }
       }
   }
    printf("max_satir: %d\n", max_satir);
    printf("max_sutun: %d\n", max_sutun);
    printf("min_satir: %d\n", min_satir);
    printf("min_sutun: %d\n", min_sutun);
    printf("max: %d\n", max);
    printf("min: %d\n", min);
return 0;
}
