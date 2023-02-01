#include <stdio.h>

int main() {
    
    //deklarasi array --> tipe_data nama_array[banyaknya elemen];
    int arrNilai[5];
    int total = 0;
    int rata=0;
    int i;
      
    // mengisikan nilai;
    printf("Tampilan inputan user ke dalam array\n");
    for(i=0; i<5; i++)
    {
        printf("Masukan nilai ke dalam array di index ke %d : ",i);
        scanf("%d", &arrNilai[i]);
    }
    
    //proses total
    for(i=0; i<5; i++)
    {
        total = total + arrNilai[i];
    }
    printf("\nTotal nilai : %d",total);
    
    rata = total/5;
    printf("\nRata rata adalah : %d",rata);
    
    printf("\nTampilan Output");
    for(i=0; i<5; i++)
    {
        printf("\n%d", arrNilai[i]);
    }

    
    
    
    // looping --> mengakses index
    
    
    return 0;
}