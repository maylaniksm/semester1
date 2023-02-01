#include <stdio.h>

int main()
{
	int x1,y1,x,y,bayar,diskon,hargax,hargay,tot_disk,harga_akhir;
	
	printf("Deterjen x= ",x);
	scanf("%i",&x);
	if (x==1){
		x1=15000;
		printf("Harga Deterjen= %d",x);
		
	}
	
	else if(x==2){
	x1=15000+(15000-0.1*15000);
       printf("harga deterjen : %d\n", x1);
	}
	else if(x==3){
    x1=15000+(15000-0.1*15000)+(15000-0.3*15000);
    printf("harga deterjen : %d\n", x1);
	}
	
	printf("\nSabun y= ",y);
	scanf("%i",&y);
	
	if (y==1){
		y1=5000;
		printf("Harga Sabun");
	}
	
	else if(y==2){
		y1=5000+(5000-0.1*5000);
        printf("harga sabun : %d\n", y1);
	}
	else if(y==3){
	y1=5000+(5000-0.1*5000)+(5000-0.3*5000);
    printf("harga sabun : %d\n", y1);
	}


	printf("Total: %i\n",x1+y1);
	
return 0;	
}