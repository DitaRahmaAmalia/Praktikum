#include <iostream>
using namespace std;

int main()
{
	char Nama[50], NIM[30];
	float UTS, UAS, Nilai_Akhir;
	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"Tugas Praktikum Algoritma dan Pemrograman"<<endl;
	cout<<"NIM	= 124200032"<<endl;
	cout<<"Nama	= Dita Rahma Amalia"<<endl;
	cout<<"---------------------------------------------------------------------------------";
	cout<<" "<<endl;
	
	cout<<"Nama Mahasiswa = ";
	cin.getline (Nama, sizeof(Nama));
	cout<<"NIM = ";
	cin.getline (NIM, sizeof(NIM));
	cout<<" "<<endl;
	cout<<"Nilai UTS = ";
	cin>>UTS;
	cout<<"Nilai UAS = ";
	cin>>UAS;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	
	Nilai_Akhir = (UTS + UAS)/2;
	
	cout<<"Mahasiswa dengan nama "<<Nama<<"("<<NIM<<") mendapatkan nilai akhir = "<<Nilai_Akhir;
	
	return 0;
}

