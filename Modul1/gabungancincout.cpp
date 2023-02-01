#include <iostream>

using namespace std;

int main ()
{
	//deklarasi type data variable
		int tanggal, tahun;
		char bulan[20];
		
		cout<< "Masukkan tanggal lahir anda : "; cin>> tanggal;
		cout<< "Masukkan bulan lahir anda : "; cin>> bulan;
		cout<< "Masukkan tahun lahir anda : "; cin>> tahun;
		
		cout<< "***********HASIL***********"<<endl; //endl=enter
		cout<< "Maka Anda Lahir Pada : "; cout<<tanggal <<bulan << tahun;
		return 0;
	 }