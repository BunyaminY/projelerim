#include <stdio.h>

int main() {
    
    int sayı1,sayı2,büyük,küçük,kalan;
        
    do{
        printf("Ebobunu bulmak istediğiniz 2 adet pozitif tam sayı giriniz...\n");
        scanf("%d%d",&sayı1,&sayı2);
        
    }while( sayı1<=0 || sayı2<=0);
    
    if (sayı1>sayı2){
        büyük=sayı2;
        küçük=sayı1;
    }
    else{
        büyük=sayı2;
        küçük=sayı1;
    }
    kalan=büyük % küçük;
    while (kalan !=0) {
        if(kalan>= küçük){
            büyük=kalan;
        }
        else{
            büyük=küçük;
            küçük=kalan;
        }
        kalan=büyük%küçük;
    }
    
    
    printf("Ebob (%d,%d)=%d\n",sayı1,sayı2,küçük);
 
    return 0;
}
 
