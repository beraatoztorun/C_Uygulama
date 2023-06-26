#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    
    printf("Bir kelime veya cumle girin: ");
    fgets(kelime, sizeof(kelime), stdin);

    int uzunluk = strlen(kelime) - 1;

    printf("Girdiginiz kelimenin veya cumlenin uzunlugu: %d\n", uzunluk);

    return 0;
}
