#include <stdio.h>

int main(){
	
	int n;
	printf("Masukkan Nilai : ");
	scanf("%d", &n);
	
	if(n >= 60){
		printf("Lulus dengan nilai %d", n);
	} else{
		printf("Maaf tidak lulus");
	}
	return 0;
}