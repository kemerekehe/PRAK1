#include <stdio.h>
int main () {
    float putaran, jarak, phi, jari;
    putaran=5;
    jarak=14;
    phi=3.14;
    jari=jarak/putaran/phi/2;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman =%2.f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %2.f kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari);
}