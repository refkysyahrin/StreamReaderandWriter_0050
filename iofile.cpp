#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // Membuka file dalam mode menulis.
    offstream outfile;
    // Menunujuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
}