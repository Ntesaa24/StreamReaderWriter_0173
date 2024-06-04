#include <fstream>
#include <iostream>
#include  <string>
using namespace std; 

int main() {
	
	//untuk menyimpan data berbentuk string
	string baris; 

	//untuk membuka file dalam mode menulis. 
	ofstream outfile;
	// menunjuk ke sebuah nama file 
	outfile.open("contohfile.txt");

	cout << ">= Membuka file, \'q\' untuk keluar" << endl; 

}