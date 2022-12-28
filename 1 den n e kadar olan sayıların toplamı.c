#include <stdio.h>
#include <stdlib.h>
int main()
{
    int büyük = 0,küçük = 0;
    int sayı1,sayı2,toplam=0;
    printf("Lütfen arasındaki sayıları toplamam gereken 2 sayıyı giriniz...\n");
    scanf("%d%d",&sayı1,&sayı2);
    int terimSayısı = abs(sayı1-sayı2)  +1;
    if (sayı2>sayı1){
        büyük=sayı2;
        küçük=sayı1;
        while (terimSayısı>0) {
            printf("%d\n",sayı1);
            toplam=toplam+sayı1;
            sayı1++;
            terimSayısı--;
        }
    }
    else if (sayı2<=sayı1){
        büyük=sayı1;
        küçük=sayı2;
        while (terimSayısı>0) {
            printf("%d\n",sayı2);
            toplam=toplam+sayı2;
            sayı2++;
            terimSayısı--;
        }
    }
    printf("%d den %d ye kadar olan sayıların toplamı=%d\n",küçük,büyük,toplam);
  
    
    
    
    
    
    return 0;
}
