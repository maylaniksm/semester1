#include <stdio.h>
 
int main(void)
{
	int i,j;
  for (i = 0; i <= 5; i++) {
      for (j=1; j<=i;j++) {
          printf ("_ ");
      }
    for (j = 0; j <= i; j++) {
     
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}