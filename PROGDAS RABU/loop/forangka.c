#include <stdio.h>
 
int main()
{
  int awal;
  int jumlah_angka;
  int index = 1;
  int plus = 1 ;
  
  printf("MASUKKAN ANGKA AWAL  : ");
  scanf("%d", &awal);
  printf("MASUKKAN JUMLAH ANGKA YANG DIINGINKAN : ");
  scanf("%d", &jumlah_angka);

  for(index; index <= jumlah_angka; ++index){
  	printf("%d ", awal);
	  if(plus){
		  awal = awal + 3;
		  plus = 0;
	  }else{
		  awal--;
		  plus = 1;
	  }
  }
  return 0;
}