#include <stdio.h>

int main () {
	
	int i;
	int n=0;
	int bil;
	
	printf ("Masukkan Banyak suku: ");
	scanf ("%d", &bil);
	
	for (i=1;i<=bil;i++) {
		
		printf ("%d\t", i);
		i= i+n;
		n= n+1;
		
	}
	
	return 0;
}