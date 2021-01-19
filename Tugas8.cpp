#include<iostream>
using namespace std;
int main()
{
	int n;
  cout<<"========================================="<< endl;
	cout<<"========MEMBUAT SETENGAH PIRAMIDA========"<< endl;
	cout<<"========================================="<< endl;
	cout << "masukkan panjang pola: ";
	cin>>n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*" ;
		}
		cout << endl;
	}
	
	return 0;
}
