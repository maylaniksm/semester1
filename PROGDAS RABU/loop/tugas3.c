#include <stdio.h>

int main()
{
	int i,j,k,n;
	for(i=0 ; i <5 ;i++){
		for(j=i ; j < 5 ; j++){
	        if(j%2 == 0){
	            printf("*");
	        }
	        else{
	            printf("o");
	        }
		}
		printf("\n");
	}
	return 0;
}