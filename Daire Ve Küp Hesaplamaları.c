//Çemberin Alanı & Çevresini Hesaplama / Küpün Yanal Alanları & Hacmini Hesaplama

#include <stdio.h>
#define pi 3.14
//define sabit değerleri tanımlamaya yarar.
  int main()
{
     
      float cemberinYarıçapı;
      
      
      printf("Çemberin Yarı Çapını Giriniz...");
             scanf("%f",&cemberinYarıçapı);
      
      printf("%f\n",pi);
      
      printf("Çemberin Alanı:%f\n",pi*cemberinYarıçapı*cemberinYarıçapı);
      printf("Çemberin Çevresi:%f\n",2*pi*cemberinYarıçapı);
      
      
      int küpBirKenar;
      printf("Küpün Bir Kenar Uzunluğunu Giriniz...\n");
      scanf("%d", &küpBirKenar);
      
      
      float yanalalanarıntoplamı = 6 * küpBirKenar * küpBirKenar;
      float KüpüHacmi = küpBirKenar * küpBirKenar * küpBirKenar;
      
      
      
      
      
      printf("Küpün Yanal Alanaların Toplamı: %f\n",yanalalanarıntoplamı);
      printf("Küpün Hacmi: %f\n",KüpüHacmi);
      
    
      
      
      
      
      
      
      return 0;
      
  }
