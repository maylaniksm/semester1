#include <stdio.h>

int main () {
	int anggota, penjualan, komisi;
	
	printf("\nMasukkan Jumlah Anggota : "); 
	scanf ("%d", &anggota);
	printf("\nMasukkan Total Penjualan : "); 
	scanf ("%d", &penjualan);
	
	if (anggota < 10){
		komisi = 0.05 * penjualan;
		printf ("\nKomisi : %d", komisi);
	}
	else if (anggota >= 10 && anggota <= 50){
		if (penjualan < 1000000){
			komisi = 0.01 * penjualan;
		}
		else {
			komisi = 0.125 * penjualan;
		}
		printf ("\nKomisi : %d", komisi);
	}
	else if (anggota > 50){
		komisi = 0.15 * penjualan;
		printf ("\nKomisi : %d", komisi);
	}
	
}