#include <stdio.h>
 
int main()
{
  int i;
  for (i = 64; i >= 8; i /= 2) {
    printf("%d, ", i);
    
  }
  return 0;
}