#include <iostream>
#include <string>
using namespace std;

int main() {
  string namaDepan, namaBelakang;

  cout << "Masukkan nama depan: ";
  getline(cin, namaDepan);

  cout << "Masukkan nama belakang: "; 
  getline(cin, namaBelakang);

  string namaLengkap = namaDepan + " " + namaBelakang;

  cout << "Nama lengkap: " << namaLengkap << endl;

  return 0;
}
