#include <stdio.h>

int main(){
    int batasBawah, batasAtas;
    int i;

    printf("Program Mencetak Barisan Bilangan Ganjil dan Genap dalam Rentang Tertentu\n\n");
    printf("Batas Bawah : ");
    scanf("%d", &batasBawah);
    printf("Batas Atas : ");
    scanf("%d", &batasAtas);

    printf("Bilangan Genap : ");
    for(i = batasBawah; i <= batasAtas; i++){
        if(i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nBilangan Ganjil : ");
    for(i = batasBawah; i <= batasAtas; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }

    return 0;
}