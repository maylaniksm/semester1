#include <stdio.h>

int is_even(int num) {
  if (num % 2 == 0) {
    return 1;
  }
  return 0;
}

int main(void) {
  int num;

  printf("Masukkan angka: ");
  scanf("%d", &num);

  int result = is_even(num);
  if (result == 1) {
    return 1;
  } else {
    return 0;
  }

  return 0;
}
