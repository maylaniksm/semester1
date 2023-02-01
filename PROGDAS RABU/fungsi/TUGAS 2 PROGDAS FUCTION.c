#include <stdio.h>


int isPositive(int num)
{
if (num > 0)
return 1;
else
return 0;
}

int main()
{
int num;
printf("Masukkan sebuah bilangan: ");
scanf("%d", &num);


if (isPositive(num))
    return 1;
else
    return 0;

return 0;
}