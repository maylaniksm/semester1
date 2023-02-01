#include <stdio.h>

void main()
{
    float arrAngka[5] = {1.2, 3.4, 5.6, 7.8, 9.0};
    char arrKarakter[9] = {'i','n','d','o','n','e','s','i','a'};
    int arrGanjil[5];

    //data angka 1.2 - 9.0
    for(int i = 0; i <= 4; i++){
        printf("%.1f\n", arrAngka[i]);
    }

    //data char indonesia
    puts("");
    for(int i = 0; i <= 8; i++){
        printf("%c", arrKarakter[i]);
    }

    //bilangan ganjil
    puts("");
    puts("");
    for(int i = 0; i <= 4; i++){
        printf("Masukkan bilangan: ");
        scanf("%d", &arrGanjil[i]);
    }
    for(int i = 0; i <= 4; i++){
        if(arrGanjil[i] % 2 != 0){
            printf("%d adalah bilangan ganjil\n", arrGanjil[i]);
        }
    }

    //data char indonesia
    puts("");
    for(int i = 0; i <= 8; i++){
        if(arrKarakter[i] == 'a'){
            printf("karakter a ditemukan!\n");
        }else{
            printf("karakter a tidak ditemukan\n");
        }
    }
}