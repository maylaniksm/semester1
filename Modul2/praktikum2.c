#include <stdio.h>

int main () {
	
	char nama [50], buku [50], kasir[50]; //Membuat variabel
	int tanggal, uang=500000 , kembalian, total, harga, jumlah, perbandingan, diskon;

	printf("	=================================================== ");
	printf("\n		           Toko Buku Informa			");
	printf("\n	 	   Solusi Belanja Buku Serba Ada	    ");
	printf("\n	=================================================== \n");
	printf("														\n");
	printf("Masukkan Nama Pembeli : "); //menginputkan nama pembeli
	scanf ("%s", &nama); //scanf mengambil input
	printf("Masukkan Nama Kasir : "); //menginputkan nama kasir
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
	
	printf("Nomor Buku Yang Anda Beli   : "); 
	scanf ("%s", &buku);
	printf("Harga Buku Yang Anda Beli  : ");
    scanf ("%d", &harga);
	printf("Jumlah Buku  		: "); scanf ("%d", &jumlah);
	printf("Masukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
	
	total = harga  + diskon;
	kembalian = uang - total - diskon;
	perbandingan = total <= uang;
	
	//percabangan kondisi diskon
    if(total > 125000 && total < 150000){
     diskon=0.05 * total;
    }else if(total > 70000 && total < 124000){
       diskon=0.03 * total;
    }else{
        diskon=0;
    }
	
	printf("                                             \n");
	printf("Uang Anda      : Rp%d \n",uang);
	printf("Total Anda     : Rp%d \n",total);
	printf("Diskon Anda     : Rp%d \n",diskon);
	printf("Kembalian Anda : Rp%d\n", kembalian);
	printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
	printf("                                             \n");
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     TERIMA KASIH       >>>>>>>>>>|\n");	
	printf("|--------------------------------------------|\n");
	
	
	
	
	return 0;
}