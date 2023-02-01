#include <iostream>
 
using namespace std;
 
int main()
{
  int nilai;
 
  cout << "Input Nilai Anda : ";
  cin >> nilai;
 
  if (nilai >= 60 ) {
    cout << "Anda Lulus dengan nilai " << nilai;
  }
  else {
    cout << "Maaf Anda Tidak Lulus" << endl;
  }
 
  return 0;
}