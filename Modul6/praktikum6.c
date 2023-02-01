#include <stdio.h>

//membuat fungsi printan
void printan(int harga, int jumlah,int uang ){ 
    int harbuk = harga * jumlah;
    int total = harbuk;
    int kembalian = uang - harbuk;
    int perbandingan = total <= uang;
   
            printf("                                             \n");
            printf("Uang Anda      : Rp%d \n",uang);
            printf("Total Anda     : Rp%d \n",total);
            printf("Kembalian Anda : Rp%d\n", kembalian);
            printf("Perbandingan Antara Total dan Uang adalah %d\n", perbandingan);
}

int main () {
	
	char nama [50], kasir[50];
	int arrHargaBuku[7] = {95000,90000,85000,80000,75000,70000,65000};
	int tanggal, uang , kembalian, total, harga, jumlah, harbuk, perbandingan, diskon, n;
	char ulang = 'y';
	int i = 0;
	
	while(ulang == 'y')
	{
	printf("	=================================================== ");
	printf("\n		           Selamat Datang di			");
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
	printf("| 1   Pemrograman C         Rp. %d        |\n",arrHargaBuku[0]);
	printf("| 2   Pemrograman PHP       Rp. %d        |\n",arrHargaBuku[1]);
	printf("| 3   Pemrograman Java      Rp. %d        |\n",arrHargaBuku[2]);
	printf("| 4   Pemrograman Phyton    Rp. %d        |\n",arrHargaBuku[3]);
	printf("| 5   Pemrograman Laravel   Rp. %d        |\n",arrHargaBuku[4]);
	printf("| 6   Pemrograman React     Rp. %d        |\n",arrHargaBuku[5]);
	printf("| 7   Pemrograman Node      Rp. %d        |\n",arrHargaBuku[6]);
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
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang); //memanggil fungsi printan
            break;
		case 2: 
			printf ("\n\t Pemrograman PHP \n"); 
			printf ("\t Harga Buku : Rp 90.000 \n");
			harga = 90000;
			harbuk=90000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
            printan(harga,jumlah,uang);
			break;
		case 3:
			printf ("\n\t Pemrograman Java \n"); 
			printf ("\t Harga Buku : Rp 85.000 \n");
			harga = 85000;
			harbuk=85000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang);
			break;
		case 4: 
			printf ("\n\t Pemrograman Phyton \n"); 
			printf ("\t Harga Buku : Rp 80.000 \n");
			harga = 80000;
			harbuk=80000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang);
			break;
		case 5: 
			printf ("\n\t Pemrograman Laravel \n"); 
			printf ("\t Harga Buku : Rp 75.000 \n");
			harga = 75000;
			harbuk=75000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang);
			break;
		case 6: 
			printf ("\n\t Pemrograman React \n"); 
			printf ("\t Harga Buku : Rp 70.000 \n");
			harga = 70000;
			harbuk=70000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang);
			break;
		case 7: 
		   	printf ("\n\t Pemrograman Node \n"); 
			printf ("\t Harga Buku : Rp 65.000 \n");
			harga = 65000;
			harbuk=65000;
			printf("\nJumlah Buku Yang Dibeli : "); 
			scanf ("%d", &jumlah);
			printf("Jumlah Harga Buku Yang Dibeli : Rp %d ", harbuk*jumlah);
			printf("\nMasukkan Uang Pembayaran Anda : Rp "); 
			scanf ("%d", &uang);
            printan(harga,jumlah,uang);
			break;
		default: printf ("\n\t Maaf Buku Tidak Ada \n");
	}
	
	printf("\n");
	printf("|============================================|\n");
	printf("|<<<<<<<<<<     TERIMA KASIH       >>>>>>>>>>|\n");	
	printf("|--------------------------------------------|\n");
	
	printf("Apakah Anda Ingin Membeli Lagi?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulang);

        i++;	
	}
return 0;
}