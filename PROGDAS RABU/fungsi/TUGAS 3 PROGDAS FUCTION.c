#include <stdio.h>

int cek_prima(int x)
{
	int i;
if (x == 1) return 0;
for ( i = 2; i <= x/2; i++)
{
if (x % i == 0) return 0;
}
return 1;
}

int main()
{
int input;
printf("Masukkan sebuah bilangan: ");
scanf("%d", &input);
if (cek_prima(input))
{
    return 1;
}
else
{
    return 0;
}
return 0;
}