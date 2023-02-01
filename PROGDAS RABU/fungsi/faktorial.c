#include <stdio.h>

int faktorial(int angka);
int main() {
    int angka;
    
    printf("masukkan angka: ");
    scanf("%d", &angka);
    
    printf("Hasilnya adalah %d", faktorial(angka));
    
    return 0;
}


int faktorial(int angka)
{ 
	int i, hasil;
	hasil=1;
	for (i=1;i<=angka;i++) {
		hasil=i*hasil;
	}
    return hasil;
}