#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjukkan ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	// Unlimited loop untuk menulis.
	while (true) {
		cout << "_ ";
		// Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
	}


}