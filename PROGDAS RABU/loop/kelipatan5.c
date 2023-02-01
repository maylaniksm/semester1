#include <stdio.h>

int main(void) 
{
    int hasil = 0;
    for(hasil=0; hasil<=100; hasil++)
    {
        printf("%d\t",hasil);
        hasil = hasil+5;
    }
    return 0;
}