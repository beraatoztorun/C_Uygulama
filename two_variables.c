#include <stdio.h>

int main() {
    int sayi1, sayi2;
    int* ptr1, *ptr2;

    // Değer atama
    sayi1 = 55;
    sayi2 = 27;

    // Pointer'larla değişkenlere erişim
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    // Değerleri ekrana yazdırma
    printf("sayi1 = %d\n", *ptr1);
    printf("sayi2 = %d\n", *ptr2);

    return 0;
}
