#include<iostream>
using namespace std;
void garis(){
	cout<<"                                                       "<<endl;
}
int main ()
{ 
	float diskon0, diskon1, diskon2, diskon3;
	int totalbelanja, totalbayar, diskon;
	diskon0 = 0;
	diskon1 = 0.1;
	diskon2 = 0.125;
	diskon3 = 0.15;
	
	cout << "                 PROGRAM MENGHITUNG DISKON               " <<endl;
        garis();
	cout << "Masukan Total Belanja : Rp. ";
	cin >> totalbelanja;
	cout <<endl;
	
	if (totalbelanja <= 25000){
		diskon = totalbelanja * diskon0;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 0%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;	
	} else if (totalbelanja <= 50000){
		diskon = totalbelanja * diskon1;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 10%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;	
	} else if (totalbelanja <= 100000){
		diskon = totalbelanja * diskon2;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 12.5%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl; 
	} else if (totalbelanja > 100000){
		diskon = totalbelanja * diskon3;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 15%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
 	}
	return 0;
}
