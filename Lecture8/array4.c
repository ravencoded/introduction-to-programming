
#include <stdio.h>
int main() {
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    int satirtop ;
    int sutuntop ;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("\t%d",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++) {
         satirtop=0;
        for(int j=0;j<3;j++) {
            satirtop+=array[i][j];
        }
        printf("%d\n",satirtop);
    }
    for(int j=0;j<3;j++) {
        int sutuntop=0;
        for(int i=0;i<3;i++) {
            sutuntop+=array[i][j];
        }
        printf("%d\n",sutuntop);
    }
    return 0;
}
