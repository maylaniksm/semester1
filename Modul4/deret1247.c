#include <stdio.h>
 
int main()
{
  int i, b= 0;
  for (i = 1; i <= 30; i++) {
    printf("%d, ", i);
    i = i + 1 + b;
    i = i - 1;
    b++;
  }
  return 0;
}