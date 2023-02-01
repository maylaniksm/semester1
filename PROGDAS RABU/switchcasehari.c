#include <stdio.h>

int main()
{
	int n;
	
	printf("Inputkan Angka Hari (1-7) : ");
	scanf ("%d", &n);
	
	switch (n){
		case 1: printf ("\n\t Hari Minggu \n"); break;
		case 2: printf ("\n\t Hari Senin \n"); break;
		case 3: printf ("\n\t Hari Selasa \n"); break;
		case 4: printf ("\n\t Hari Rabu \n"); break;
		case 5: printf ("\n\t Hari Kamis \n"); break;
		case 6: printf ("\n\t Hari Jumat \n"); break;
		case 7: printf ("\n\t Hari Sabtu \n"); break;
		default: printf ("\n\t Maaf Tidak Ada \n");
	}
	return 0;
}