#include <stdio.h>

int main () {
	
	char nama [50], buku [50], kasir[50]; //Membuat variabel
	int tanggal, uang, kembalian, total, harga, jumlah;

	printf("	=================================================== ");
	printf("\n		           Toko Buku Informa			");
	printf("\n	 	   Solusi Belanja Buku Serba Ada	    ");
	printf("\n	=================================================== \n");
	printf("														\n");
	printf("Masukkan Nama Pembeli : "); //menginputkan nama pembeli
	scanf ("%s", &nama);
	printf("Masukkan Nama Kasir : "); //menginputkan nama pembeli
	scanf ("%s", &kasir);
	printf("Masukkan Tanggal Beli (dd/mm/yyyy) : "); //menginputkan tanggal beli
	scanf ("%d", &tanggal);
	
	printf("                                             \n");
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     SELAMAT DATANG     >>>>>>>>>>|\n");	
	printf("|<<<<<      CUSTOMER SETIA KAMI         >>>>>|\n");
	printf("|--------------------------------------------|\n");
	printf("| NO  DAFTAR BUKU           HARGA BUKU       |\n");
	printf("| 1   Pemrograman C         Rp. 95000        |\n");
	printf("| 2   Pemrograman PHP       Rp. 90000        |\n");
	printf("| 3   Pemrograman Java      Rp. 85000        |\n");
	printf("| 4   Pemrograman Phyton    Rp. 80000        |\n");
	printf("| 5   Pemrograman Laravel   Rp. 75000        |\n");
	printf("| 6   Pemrograman React     Rp. 70000        |\n");
	printf("| 7   Pemrograman Node      Rp. 60000        |\n");
	printf("|============================================|\n");
	printf("                                             \n");
	
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     NOTA PEMBELIAN     >>>>>>>>>>|\n");	
	printf("|--------------------------------------------|\n");
	
	printf("Nama Buku Yang Anda Beli   : "); scanf ("%s", &buku);
	//scanf mengambil input
	printf("Harga Buku Yang Anda Beli  : "); scanf ("%d", &harga);
	printf("Jumlah Buku  		: "); scanf ("%d", &jumlah);
	printf("Masukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
	
	total = harga * jumlah;
	kembalian = uang-total;
	
	printf("                                             \n");
	printf("Uang Anda      : Rp%d \n",uang);
	printf("Total Anda     : Rp%d \n",total);
	printf("Kembalian Anda : Rp%d\n", kembalian);
	printf("                                             \n");
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     TERIMA KASIH       >>>>>>>>>>|\n");	
	printf("|--------------------------------------------|\n");
	
	
	
	
	return 0;
}