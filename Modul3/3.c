#include <stdio.h>

int main(){
	
	int n;
	printf("Masukkan Nilai : ");
	scanf("%d", &n);
	if (n >= 60){
		printf("\t Lulus dengan nilai %d", n);
	}else if (n >= 50 && n < 60){
		printf("\t Remedi");
	}else {
		printf("\t Mengulang semester depan");
	}
	return 0;
}