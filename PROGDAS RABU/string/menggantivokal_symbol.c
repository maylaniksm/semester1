#include <stdio.h>
#include <string.h>
int main() 
{
    char nama[100] = "muhammadiyah";
    int panjang, i;
    panjang = strlen(nama);
    for(i=0; i<panjang; i++)
    {
        if(nama[i] == 'a' || nama[i] == 'i' || nama[i] == 'u' || nama[i] == 'e' || nama[i] == 'o')
        {
            nama[i] = '*';    
            
        }
        printf("%c", nama[i]);
        
    }
    
    return 0;
}