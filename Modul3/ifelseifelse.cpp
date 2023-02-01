#include <iostream>
 
using namespace std;
 
int main()
{
  int nilai;
 
  cout << "Input Nilai Anda (0 - 100): ";
  cin >> nilai;
 
  if (nilai >= 60 ) {
    cout << "Anda Lulus dengan nilai " << nilai;
  }
  else if (nilai >= 40 && nilai < 60) {
    cout << "Anda Mengikuti Remedial" << endl;
  }
  else {
    cout << "Anda Mengulang di Semester Depan" << endl;
  }
 
  return 0;
}