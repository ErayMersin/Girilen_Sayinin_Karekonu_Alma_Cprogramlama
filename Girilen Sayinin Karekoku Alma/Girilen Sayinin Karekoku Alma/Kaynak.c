#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    int sayi;
    double sonuc;

    printf("Sayi Gir: ");
    scanf_s("%d", &sayi);

    sonuc = sqrt(sayi);

    printf("Sonuc: %f", sonuc);


    return 0;
}