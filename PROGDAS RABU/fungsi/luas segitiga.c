#include <stdio.h>

float luassegitiga(int alas, int tinggi);
int main() {
    int alas;
    int tinggi;
    float luas;
    
    printf("masukkan alas segitiga: ");
    scanf("%d", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);
    
    printf("Luas Segitiga adalah %.2f", luassegitiga(alas,tinggi));
    

    return 0;
}

// pembuatan fungsi
float luassegitiga(int alas, int tinggi)
{ 
	float luas;
    luas=0.5*alas*tinggi;
    return luas;
}