#include <stdio.h>

int main(){
    // membuat array dari tinggi badan
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    float rata_rata = 0;
    float total = 0;
    
    int i;
    for(i=0;i<10;i++){
		total += tinggi_badan[i];
	}
	rata_rata = total/10;
    printf("Rata-rata tinggi badan: %.2f\n", rata_rata);
}