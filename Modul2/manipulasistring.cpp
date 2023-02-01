#include<iostream>
#include<ctype.h>
#include<string.h>

using namespace std;

int main()
{
   char a[20], b[20];

cout<<"Masukkan Nama Pertama : ";
cin>>a;
cout<<"Masukkan Nama Kedua : ";
cin>>b;
strcat(a, b);
cout<<"Nama Lengkap Anda : "<<a;
cout << endl;

return 0;
}