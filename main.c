#include <stdio.h>

int main (){

    int kareninBirKenarı;
    
    printf("Karenin Bir Kenarını cm Cinsinden Giriniz:\n");
    
    scanf("%d",&kareninBirKenarı);
    printf("Karenin alanı: %d cm²\n",kareninBirKenarı*kareninBirKenarı);
    printf("karenin çevresi:%d cm\n",kareninBirKenarı*4);
    
    int dikdörtgenKısaKenar, dikdörtgenUzunKenar;
    printf("Dikdörtgenin Kısa Kenarı Giriniz....\n");
    scanf("%d",&dikdörtgenKısaKenar);
    printf("Dikdörtgenin Uzun Kenarı Giriniz....\n");
    scanf("%d",&dikdörtgenUzunKenar);
    printf("Dikdörtgenin Alanı %d\n", dikdörtgenKısaKenar*dikdörtgenUzunKenar);
    printf("Dikdörgenin Çevresi %d\n",dikdörtgenKısaKenar+dikdörtgenKısaKenar+dikdörtgenUzunKenar+dikdörtgenUzunKenar);
    
    
    
    
    
   
    return 0;
    
    
    
    
}
