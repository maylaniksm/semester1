#include <stdio.h>

int main()
{

   int jam, menit, detik;

	printf("Masukkan input jam : ");
	scanf ("%d", &jam);
  
    if(jam > 24) {
		printf("maaf input jam yang anda masukkan salah");
	}else{
		printf("masukkan input menit : ");
		scanf("%d", &menit);
		if(menit > 60){
			printf("maaf input jam yang anda masukkan salah");
	}else{
		printf("masukkan input detik : ");
		scanf("%d", &detik);
		if(detik > 60){
			printf("maaf input jam yang anda masukkan salah");
	}else{
		printf("%d:%d:%d", jam, menit, detik);
    }	
    }
	}
	  return 0;
	}


