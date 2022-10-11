#include <stdio.h>
#include <math.h>
int main () {
    int alas, tinggi, A, B, C, keliling, luas;
    alas=C=5;
    tinggi=A=12;
    B=sqrt(pow(A,2)+pow(C,2));
    keliling=A+B+C;
    luas=A*C/2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", A);
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm", luas);
}