#include <stdio.h>

int main(){
    
    
    int sayı;
    int faktöriyelSonuç=1;
    printf("Faktöriyelini almak istediğiniz sayıyı giriniz...\n");
    scanf("%d",&sayı);
    int kullanıcınıngirdiğisayı=sayı;
    if(sayı>=0){
        while (sayı>=0) {
            if(sayı==0){
                faktöriyelSonuç*=1;
            }
            else {
                faktöriyelSonuç*=sayı;
            }
            sayı--;
        }
        printf("%d!=%d\n",kullanıcınıngirdiğisayı,faktöriyelSonuç);
    }
    else{
        printf("Lütfen 0 veya 0 dan büyük birsayı giriniz...\n");
    }
    
    return 0;
}
