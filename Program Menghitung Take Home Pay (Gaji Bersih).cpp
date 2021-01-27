#include<iostream>
#include<string>
using namespace std;
 
//Deklarasi Constanta 
 const float persentunjangan = 0.2;
 const float persenpajak = 0.15;

 void garis() {
 	cout<<"=============================================="<<endl;
 }

 int main()
 {
 	//Deklarasi Variabel
 	cout<<"Program Menghitung Take Home Pay (Gaji Bersih)"<<endl;
 	garis();
 	string namakaryawan;
 	float gajibersih, gajipokok, pajak, tunjangan;
 	//Masukkan Nama Karyawan
 	cout<<"Masukkan Nama Karyawan : ";
 	getline(cin,namakaryawan);
 	//Masukkan Gaji Pokok
 	cout<<"Masukkan Gaji Pokok    : Rp. ";
 	cin>>gajipokok;
 	//Perhitungan Tunjangan
 	tunjangan = gajipokok * persentunjangan;
 	//Perhitungan Pajak
 	pajak = gajipokok * persenpajak;
 	//Perhitungan Gaji Pokok
 	gajibersih = gajipokok + tunjangan - pajak;
 	garis();
 	//Hasil Akhir
 	cout<<"Nama Karyawan : "<<namakaryawan<<endl;
 	cout<<"Gaji Bersih   : Rp. "<<gajibersih<<endl;
 	
 	return 0;
 }
