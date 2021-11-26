// Nama		: Dwika Pangestuti
// Kelas	: D
// NPM		: 2117051055

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float berat;
	float tinggi;
	cout<<"Berat Badan Anda (kg)			= ";
	cin >> berat;
	cout<<"Tinggi Badan Anda (meter)		= ";
	cin >> tinggi;
	
	
	cout << berat/pow(tinggi,2);
	return 0;
	
}
