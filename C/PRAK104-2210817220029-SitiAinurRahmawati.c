#include <stdio.h>
int main () {
    int A, B;
    A=400000;
    B=350000;
    printf("Harga sepatu A adalah %d\n",A);
    printf("Harga sepatu B adalah %d\n",B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n",(A-(A*13/100)));
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d\n",(B-(B*21/100)));
}