#include <stdio.h>

unsigned long long int faktoriyel(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

int main() {
    unsigned int sayi;
    
    printf("Bir sayi girin: ");
    scanf("%u", &sayi);

    unsigned long long int sonuc = faktoriyel(sayi);

    printf("%u sayisinin faktoriyeli: %llu\n", sayi, sonuc);

    return 0;
}
