#include <stdio.h>

int main() {
    double sayi;

    printf("Bir ondalik sayi girin: ");
    scanf("%lf", &sayi);

    printf("Girilen sayi on altilik (hexadecimal) bicimde: %a\n", sayi);

    return 0;
}
