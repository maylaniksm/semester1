#include <stdio.h>

int main() {
	char namapanggilan[20];
	char asalkota[20];
	
	printf("Masukkan Nama Panggilan : "); 
	scanf ("%s", &namapanggilan);
	printf("Masukkan Asal Kota : "); 
	scanf ("%s", &asalkota);
	
	printf ("Halo, %s\n", namapanggilan);
	printf ("Anda berasal dari kota/kabupaten %s", asalkota);

	return 0;
}