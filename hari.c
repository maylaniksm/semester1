#include <stdio.h>

int main()
{

  int n;

  printf("Inputkan Angka Hari (1-7) : ");
  scanf ("%d", &n);

  if ( n == 1) {
   printf("Senin");
  }
  else if ( n == 2) {
    printf("Selasa");
  }
  else if ( n == 3) {
    printf("Rabu");
  }
  else if ( n == 4) {
    printf("Kamis");
  }
  else if ( n == 5) {
    printf("Jumat");
  }
  else if ( n == 6) {
    printf("Sabtu");
  }
  else if ( n == 7) {
    printf("Minggu");
  }
  else {
    printf("Tidak Ada");
  }


  return 0;
}