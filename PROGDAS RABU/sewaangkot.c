#include <stdio.h>

int main (){
	
	int km, total;
	
	printf ("Masukkan KM menyewa : ");
	scanf ("%d", &km);
	
	if (km == 1){
		total = km * 4500;
		printf ("Total Harga : %d", total);
	}
	else if (km > 1){
		total = (1*4500)+((km-1)*2000);
		printf ("Total Harga : %d", total);
	}
	else {
		printf("Eror");
	}
	return 0;
}