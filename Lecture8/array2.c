
#include <stdio.h>
int main() {
    int arr1[5];
    int arr2[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
        printf("ilk dizinin%d.sayisi:%d\t",i+1,arr1[i]);
    }
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr1[i]*2;
        printf("ikinci dizinin %d.sayisi:%d\t",i+1,arr2[i]);
    }
}
