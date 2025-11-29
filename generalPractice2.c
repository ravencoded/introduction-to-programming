#include<stdio.h>
int main() {

    int n ;
    int max ;
    int min ;
    printf("dizi boyutunu giriniz\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if (i==0) {
            max = arr[0];
            min = arr[0];
        }
        else if (arr[i]>max) {
            max = arr[i];
        }
        else if (arr[i]<min){
            min = arr[i];
}
    }
       printf("max:%d\n",max);
        printf("min:%d\n",min);
    return 0;
}