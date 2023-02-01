#include <stdio.h>

void tulis_mundur(int arrNilai[], int len);
void main() {
    int arrNilai[]={1, 2, 3, 4, 5};
    tulis_mundur(arrNilai, 5);
}

void tulis_mundur(int arrNilai[], int len)
{ 
	int i; 
	for (i=len-1;i>=0;i--) {
		printf("%d\t", arrNilai[i]);
	}
    
}