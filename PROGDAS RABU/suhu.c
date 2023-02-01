#include <stdio.h>

int main()
{

  int suhu = 40;

	printf("Inputkan Suhu : ");
	scanf ("%d", &suhu);
  
  if ( suhu > 40) {
   printf("SANGAT PANAS");
  }
  else if ( suhu > 35 && suhu < 40) {
    printf("PANAS");
  }
  else if ( suhu > 30 && suhu < 35) {
    printf("CUKUP PANAS");
  }
  else {
    printf("DINGIN");
  }


  return 0;
}