#include <iostream>
 
using namespace std;
 
int main()
{
  	int a, b;
  	bool hasil;
	cout<< "Masukkan a : "; cin>> a;
	cout<< "Masukkan b : "; cin>> b;
  
 
  cout << "Isi Variabel a: " << a << endl;
  cout << "Isi Variabel b: " << b << endl;
  cout << endl;
 
  hasil = a == b;
  cout << "Apakah a == b ? " << hasil << endl;
 
  hasil = a != b;
  cout << "Apakah a != b ? " << hasil << endl;
 
  hasil = a > b;
  cout << "Apakah a > b ? " << hasil << endl;
 
  hasil = a < b;
  cout << "Apakah a < b ? " << hasil << endl;
 
  hasil = a >= b;
  cout << "Apakah a >= b ? " << hasil << endl;
 
  hasil = a <= b;
  cout << "Apakah a <= b ? " << hasil << endl;
 
  return 0;
}