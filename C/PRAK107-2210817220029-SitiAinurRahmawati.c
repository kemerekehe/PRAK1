#include <stdio.h>
int main () {
    int a, b, c, keliling, harga;
    a=4, b=5, c=7;
    keliling=a+b+c;
    harga=85000;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", keliling*harga);
}