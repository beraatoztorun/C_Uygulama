#include <stdio.h>

int main() {
    FILE* dosya;
    char metin[100];

    // Dosyayi yazma modunda acma
    dosya = fopen("metin.txt", "w");

    if (dosya == NULL) {
        printf("Dosya olusturma veya açma hatasi!\n");
        return 1;
    }

    printf("Metni girin: ");
    fgets(metin, sizeof(metin), stdin);

    // Metni dosyaya yazma
    fprintf(dosya, "%s", metin);

    // Dosyayi kapatma
    fclose(dosya);

    // Dosyayi okuma modunda acma
    dosya = fopen("metin.txt", "r");

    if (dosya == NULL) {
        printf("Dosya acma hatasi!\n");
        return 1;
    }

    // Dosyadan metni okuma ve ekrana yazdirma
    printf("Dosyadan okunan metin:\n");
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    // Dosyayi kapatma
    fclose(dosya);

    return 0;
}
