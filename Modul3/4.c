#include <stdio.h>

int main()
{
	char grade = 'D';
	
	switch (grade){
		case 'A': 
			printf ("\n\t Sangat Baik \n"); 
			break;
		case 'B': 
			printf ("\n\t Baik \n"); 
			break;
		case 'C': 
			printf ("\n\t Rata-Rata \n"); 
			break;
		case 'D': 
			printf ("\n\t Rendah \n"); 
			break;
		case 'E': 
			printf ("\n\t Sangat Rendah \n"); 
			break;
		case 'F': 
			printf ("\n\t Nilai Tidak Ada \n"); 
			break;
			
		default: printf ("\n\t Maaf Tidak Ada \n");
	}
	printf("\t Nilai Anda Adalah %c", grade);
	return 0;
}