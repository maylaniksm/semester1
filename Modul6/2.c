#include <stdio.h>

float tambah(int a, int b){
    float hasil = (float)a + (float)b;
    return hasil;
}
float kurang(int a, int b){
    float hasil = (float)a - (float)b;
    return hasil;
}
float kali(int a, int b){
    float hasil = (float)a * (float)b;
    return hasil;
}
float bagi(int a, int b){
    float hasil = (float)a / (float)b;
    return hasil;
}

void main(){
	//int a=5, b=3;
	printf("Hasil 5+2: %.f\n", tambah(5, 2));
	printf("Hasil 5-2: %.f\n", kurang(5, 2));
    printf("Hasil 5*2: %.f\n", kali(5, 2));
    printf("Hasil 5/2: %.2f\n", bagi(5, 2)); //fungsi 2 sebelum f untuk berapa angka di belakang koma
}