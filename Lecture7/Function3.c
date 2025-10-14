#include<stdio.h>
int bes_ekl(int *x) ;
int karesini_al(int *x);
int main () {
    int sayi ;
    printf("sayi girin: ");
    scanf("%d", &sayi);
    printf("sayinin bes eklenmis hali %d dir\n",bes_ekl(&sayi));
    printf("sayinin karesi %d dir\n",karesini_al(&sayi));
return 0;
}
int bes_ekl(int *x) {
    (*x)+=5 ;
    return *x ;
}
int karesini_al(int *x) {
    (*x)*=(*x);
    return *x ;
}
//pass by refrence