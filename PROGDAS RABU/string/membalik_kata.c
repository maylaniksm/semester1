#include <stdio.h>
#include <string.h>

int main() {
  char word[50];
  int len, i;
  
     printf ("Masukkan kata: ");
     scanf ("%s", &word);
 
     len=strlen(word);
 
  for (i = len - 1; i >= 0; i--) {
    printf("%c", word[i]);
  }
  printf("\n");

  return 0;
}