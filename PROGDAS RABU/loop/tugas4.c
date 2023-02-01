#include <stdio.h>

int main() {
    
    int i ,k,j;
    for(i=0;i <= 5;i++){
        for(j=i;j<5;j++){
            printf("o");
        }
        for(k=i; k < 5 ; k++){
            
            printf("*");
        }
        printf("\n");
    }

    return 0;
}