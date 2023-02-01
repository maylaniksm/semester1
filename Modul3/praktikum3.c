#include <stdio.h>

int main () {
	
	char nama [50], kasir[50]; //Membuat variabel
	int tanggal, uang , kembalian, total, harga, jumlah, harbuk, perbandingan, diskon, n;

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
	printf("| 7   Pemrograman Node      Rp. 65000        |\n");
	printf("|============================================|\n");
	printf("                                             \n");
	
	printf("Inputkan Nomor Buku Yang Anda Beli : ");
	scanf ("%d", &n);
	
	switch (n){
		case 1: 
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 95000;
			harbuk=95000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 2: 
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 90000;
			harbuk=90000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 3:
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 85000;
			harbuk=85000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 4: 
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 80000;
			harbuk=80000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 5: 
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 75000;
			harbuk=75000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 6: 
			printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 70000;
			harbuk=70000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		case 7: 
		   	printf ("\n\t Buku Pemrograman C \n"); 
			printf ("\t Harga Buku : Rp 95.000 \n");
			harga = 65000;
			harbuk=65000;
			printf("\nJumlah Buku Yang Dibeli : "); scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); scanf ("%d", &uang);
				harbuk = harga * jumlah;
				total = harbuk - diskon;
	            kembalian = uang - total;
	            perbandingan = total <= uang;
			//percabangan kondisi diskon
    			if(total >= 150000 && total <= 250000){
					diskon=0.05 * total;
    			}else if(total >= 70000 && total < 150000){
					diskon=0.03 * total;
    			}else{
        			diskon=0;}
						printf("                                             \n");
						printf("Uang Anda      : Rp%d \n",uang);
						printf("Diskon Anda    : Rp%d \n",diskon);
						printf("Total Anda     : Rp%d \n",total);
						printf("Kembalian Anda : Rp%d\n", kembalian);
						printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
			break;
		default: printf ("\n\t Maaf Buku Tidak Ada \n");
	}
	
	printf("\n");
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     TERIMA KASIH       >>>>>>>>>>|\n");	
	printf("|--------------------------------------------|\n");
	
	
	
	
	return 0;
}