#include <stdio.h>


int main()
{
	char namaPanggilan[6];
	char asalKota[20];
	int x,z,y;
	int sisa,pilihan;
	int bayar;
	const int saldo=5000000;
	char jawab='y';
	int i=1;
	while(jawab=='y'){
	

	printf("============================================\n");
	printf("        Selamat Datang Di Ticketinaja\n");
	printf("============================================\n");
	
	printf("Masukkan Nama Panggilan Anda: ");
	scanf("%s",namaPanggilan);
	
	printf("Masukkan Asal Kota Anda : ");
	scanf("%s",asalKota);
	
	printf("Hallo %s\n",namaPanggilan);
	printf("Anda berasal dari kota/kabupaten: %s\n  ",asalKota);
	
	printf("\nTiket ke-%i: ",i);
	printf("Silahkan Yang Terhormat Bpk/Ibu %s ingin memesan tiket apa?\n",namaPanggilan);
	printf("\n1.Tiket Pesawat\n2.Tiket Bus\n3.Tiket Kereta\n4.Batal\n");
    scanf("%i",&x);
    
    if (x==1){
    	printf("\nTiket Pesawat");
	}
	else if (x==2){
		printf("\nTiket Bus");
	}
	else if (x==3){
		printf("\nTiket Kereta");
	}
	else if (x==5){
		printf("\nbatal");
	 return 0;
		
	}
	
	
	printf("\n\nPilih Tujuan Mu Bpk/Ibu %s: ",namaPanggilan);
	printf("\n1.Malang\n2.Surabaya\n3.Bandung\n4.Jogjakarta\n5.Jakarta\n6.Batal\n\n");
	scanf("%i",&z);
	
	if (z==1){
		printf("\nTiket Ke Malang: Rp.150.000");
	}
	else if (z==2){
		printf("\nTiket ke Surabaya: Rp.120.000");
		
	}
	else if (z==3){
		printf("\nTiket ke Bandung: Rp.240.000");
		
	}
	else if (z==4){
		printf("\nTiket ke Jogjakarta: Rp.300.000");
		
	}
	else if (z==5){
		printf("\nTiket Ke Jakarta: Rp.500.000");
		
	}
	else {
		printf("\nTerimakasih telah menggunakan layanan kami!\n\n");
	return 0;
	}
	
    
    printf("\n\nPilih metode pembayaran : ");
    printf("\n1.Gopay\n2.OVO\n3.m-Banking\n4.Kartu Kredit\n5.Alfamart\n\n");
    scanf("%i",&y);
    
    if (y==1){
    	printf("\nGopay");
    
	}
	else if(y==2){
		printf("\nOVO");
		
	}
	else if(y==3){
		printf("\nm-Banking");
		
	}
	else if(y==4){
		printf("\nKartu Kredit");
		
	}
	else if (y==5){
		printf("\nAlfamart");
		
	}
	else{
		printf("Cancel");
		return 0;
	}
	
	printf(" Bayar: %i",z);
	
	switch (z)
	{
	case 1:
		printf("\nTiket Ke Malang: Rp.150.000");
		break;
		
	case 2:
		printf("\nTiket ke Surabaya: Rp.120.000");
		break;

	case 3:
		printf("\nTiket ke Bandung: Rp.240.000");
	     break;
	     
    case 4:
		printf("\nTiket ke Jogjakarta: Rp.300.000");
	     break;
	case 5:
		printf("\nTiket Ke Jakarta: Rp.500.000");
	}
	
	printf("\nKonfirmasi pembayaran anda:Rp.");
	scanf("%d",&bayar);
	printf("\nMasukkan jumlah bayar:Rp. ");
	scanf("%i",&saldo);
	printf("Apakah Anda Yakin?");
	printf("\n\n1.Ya 2.Batal = ");
	scanf("%i",&pilihan);
	sisa=saldo-bayar;
	if (pilihan==1){
	 	printf("\nTransaksi Sukses!");
	 	printf("\nSisa saldo Anda:%i ",sisa);
	 	
	 }
    
	else   {
		printf("Transaksi dibatalkan!");
	}
	
    // array
    int nilai[5];

   
    nilai[0] = 1;
    nilai[1] = 2;
    nilai[2] = 3;
   

    
    for(int i = 0; i < 3; i++){
        printf("\nLoading: %d", nilai[i]);
    }

	
	printf("\nApakah anda ingin memesan tiket yang lain?\n");
    printf("Jawab (y/t) : ");
    scanf("%s", &jawab);
    i++; }
    
 
	
	printf("\n\n=============== Terimakasih Telah Menggunakan Layanan kami! ==============");
    
	return 0;

}