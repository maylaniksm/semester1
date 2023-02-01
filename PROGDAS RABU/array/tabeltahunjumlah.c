#include <stdio.h>

int main() {
    int x[4][2] = {{2006, 367}, {2007, 480}, {2008, 495}, {2009, 625}};
    int i, j;

	printf("tahun\tjumlah\n");
	
    for (i=0; i<4; i++) {
        for (j=0; j<2; j++) { 
            printf("%d\t ", x[i][j]); 
        }
        printf("\n"); 
    }
    
    
    return 0;
}