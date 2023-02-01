#include <stdio.h>

int main()
{
	int detergen1, sabun1, detergen, sabun, bayar, diskon;
	
	printf("Jumlah Detergen = ", detergen);
	scanf("%i", &detergen);
	if (detergen == 1){
		detergen1 = 15000;
		printf("Harga Detergen = %d", detergen);
		
	}
	
	else if(detergen == 2){
	detergen1 = 15000+(15000-0.1*15000);
       printf("Harga Detergen : %d\n", detergen1);
	}
	else if(detergen == 3){
    detergen1 = 15000+(15000-0.1*15000)+(15000-0.3*15000);
    printf("Harga Detergen : %d\n", detergen1);
	}
	
	printf("\n Jumlah Sabun= ", sabun);
	scanf("%i", &sabun);
	
	if (sabun == 1){
		sabun1 = 5000;
		printf("Harga Sabun");
	}
	
	else if(sabun == 2){
		sabun1 = 5000+(5000-0.1*5000);
        printf("Harga Sabun : %d\n", sabun1);
	}
	else if(sabun == 3){
	sabun1 = 5000+(5000-0.1*5000)+(5000-0.3*5000);
    printf("Harga Sabun : %d\n", sabun1);
	}


	printf("Total: %i\n", detergen1+sabun1);
	
return 0;	
}