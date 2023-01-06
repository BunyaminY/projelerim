#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int secim;
    float sayi1 = 0.0,sayi2 = 0.0;
menu:   printf("Lütfen yapmak istediğiniz işlemi seçiniz...\n");
        printf("1.Toplama\n2.Çıkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n");
        printf("Lütfen Çıkmak İçin -1 Değerini Giriniz\n");
        scanf("%d",&secim);
    
    if(secim==-1){
        goto cikis;
    }
    if(secim>0 && secim<7){
        printf("Lütfen 2 adet sayı giriniz...\n");
        scanf("%f%f",&sayi1,&sayi2);
    }
   
    switch (secim){
        case 1:
            printf("Toplam: %f\n\n\n", sayi1 + sayi2); break;
        case 2:
            printf("Fark:%f\n\n\n",sayi1-sayi2); break;
        case 3:
            printf("Çarpım:%f\n\n\n",sayi1*sayi2); break;
        case 4:
            printf("Bölüm:%f\n\n\n",sayi1/sayi2); break;
        case 5:
            printf("Karekök %f=%f\nKarekök %f=%f\n\n\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2)); break;
        case 6:
            printf("%f üzeri %f=%f\n\n\n",sayi1,sayi2,pow(sayi1,sayi2)); break;
        default:
            printf("Lütfen 1-6 Arasında bir sayı seçiniz.\n\n\n"); break;
            
    }
    
    goto menu;
    cikis:
    printf("Hesaplama işlemleri sona erdi...Hesaplamak istediğinde yine gel...\n");
    return 0;
}
