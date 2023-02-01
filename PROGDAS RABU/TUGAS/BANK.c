#include <stdio.h>

int main () {
	int jumlahpinjam, lamapinjam, totalpinjam, cicilbulan;
	
	printf("\nMasukkan Jumlah Pinjaman : Rp "); 
	scanf ("%d", &jumlahpinjam);
	printf("\nMasukkan Lama Peminjaman (Tahun) : "); 
	scanf ("%d", &lamapinjam);
	
	totalpinjam = jumlahpinjam + (lamapinjam * 0.1 * jumlahpinjam);
	cicilbulan = (totalpinjam/(lamapinjam*12));
	
	printf("Cicilan per bulan yang harus dibayar : Rp %d \n",cicilbulan);
	
	return 0;
}