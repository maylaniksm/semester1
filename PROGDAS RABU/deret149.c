#include <stdio.h>
 
int main()
{
 
  int jumlah_deret,i;
 
  printf("Jumlah deret yang diinginkan: ");
  scanf("%d",&jumlah_deret);
 
  for (i=1; i<=jumlah_deret; i++) {
    printf("%d ",i * i);
  }
 
  printf("\n");
 
  return 0;
}