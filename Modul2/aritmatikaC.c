#include <stdio.h>

int main() {
	int angkapertama, angkakedua, hasil;
	
	//angkapertama = 5;
	//angkakedua = 10;
	
	printf("Masukkan angkapertama: "); scanf ("%d", &angkapertama);
	printf("Masukkan angkakedua: "); scanf ("%d", &angkakedua);
	
	hasil = angkapertama + angkakedua;
	printf ("Hasil dari penjumlahan angkapertama dan angkakedua adalah %d", hasil);

	return 0;
}