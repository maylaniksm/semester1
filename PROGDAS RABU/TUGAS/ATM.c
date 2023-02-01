#include <stdio.h>

int main () {
	
	int nominal, hitung, hitung2, sisa;
	
	printf("\nMasukkan Jumlah Uang : Rp "); 
	scanf ("%d", &nominal);
	
	hitung = nominal/100000;
	sisa = nominal%100000;
	hitung2 = sisa/50000;
	
	if(sisa == 0){
		printf("Uang Rp100.000   : %d lembar\n",hitung);
		printf("Uang Rp50.000    : %d lembar\n",hitung2);
	}
	else {
		printf("Uang Tidak Sesuai");
	}
	
}