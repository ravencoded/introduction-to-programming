/*
#include <stdio.h>
int main() {
    int day;
    int choice;
    printf("1den 7ye kadar bir sayi girin:");
    scanf("%d",.&day);
    if(choice>=1 && choice<=7) {
        switch (choice) {
            case 1 :
                printf("pazartesi");
            break;
            case 2 :
                printf("sali");
            break;
            case 3 :
                printf("çarşamba");
            case 4 :
                printf("perşembe");
            break;
            case 5 :
                printf("cuma");
            break ;
            case 6 :
                printf("cumartesi");
            break;
            case 7 :
                printf("pazar");
            break;
            default:
                printf("geçerli bir gün girin");
            break ;
        }
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main ()
{
int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>0 || number<12) {
        switch (number) {
            case 1:
                printf("kiş");
            break;
            case 2:
                printf("kiş");
            break;
            case 3 :
                printf("ilkbahar");
            break;
            case 4 :
                printf("ilkbahar");
            break;
            case 5 :
                printf("ilkbahar");
            break;
            case 6 :
                printf("yaz");
            break;
            case 7 :
                printf("yaz");
            break;
            case 8 :
                printf("yaz");
            break;
            case 9 :
                printf("sonbahar");
            break;
            case 10:
                printf("sonbahar");
            break;
            case 11:
                printf("sonbahar");
            break;
            case 12:
                printf("kiş");
            break;
            default:
                printf("gecerli bir sayi girin");
            break;
        }
    }
return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int x = 0 , y = 0;
    char move ;
    printf("baslangic konumunuz:%d%d",x,y);
    printf("kontroller: w(kuzey) s(güney) a(batı) d(doğu)");
    printf("hareketi sonlandırmak icin f tuşuna basınız");
    while (1);
    {
scanf("%c",&move);
        switch (move)
            case a :
                x+=1;


    }
}
*/
/*
#include <stdio.h>
int main() {
    int x, toplam = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x<0) {
        x= -x ;
        while(x>0) {
            toplam+=x%10;
            x/=10;
        }
    }
    printf("girdiğiniz sayının basamakları toplamı:%d",toplam);
    if (x%toplam==0) {
        printf("harshad sayısıdır");
    }
    else ("harshad değildir");
    return 0;
}
*/
/*
#include <stdio.h>

void binaryCevir(long long n) {
    if (n == 0) {
        return  ;
    }

    binaryCevir(n / 2);

    printf("%lld", n % 2);
}

int main() {
    long long decimalSayi;

    printf("10'luk tabanda bir dogal sayi girin: ");
    scanf("%lld", &decimalSayi);

    printf("Ikilik tabanda: ");

    if (decimalSayi == 0) {
        printf("0");
    } else {
        binaryCevir(decimalSayi);
    }

    printf("\n");

    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int N ;
    printf("dik üçgen için bir sayi giriniz : ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int N ;
    printf("kaca kadar bir carpim tablosu istediginizi giriniz\n");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%4d", i  * j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int N ;
    printf("hangi sayiya kadar ki asal sayilar bulunsun ");
    scanf("%d", &N);
    if (N<2) {
            printf("asal sayi Oolup olmadıgını bilemeyiz");
        return 0;
    }
    printf("2 ile %d arasindaki asal sayilar:",N);
    for (int i = 2; i <=N; i++) {
        int asalMi = 1 ;
        for (int j=2 ; j*j <= i; j++)
            {
            if (i%j==0) {
                asalMi = 0 ;
                break;
                if (asalMi==1)
            }
        }

    }
}
*/