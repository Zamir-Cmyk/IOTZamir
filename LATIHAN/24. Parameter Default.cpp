#include <iostream>
using namespace std;

int hitungTotal(int harga, float diskon = 0.10) {
  return harga - (harga * diskon);
}

int main() {
  int hargaBarang;

  cout << "Masukkan harga barang: ";
  cin >> hargaBarang;

  cout << "Total harga dengan diskon default (10%): Rp"
       << hitungTotal(hargaBarang) << endl;

  float diskonUser;
  cout << "Masukkan diskon (dalam persen, contoh: 0.2 untuuk 20%): ";
  cin >> diskonUser;
  cout << "Total harga dengan diskon " << (diskonUser * 100) << "%: Rp"
       << hitungTotal(hargaBarang, diskonUser) << endl;
  return 0;
}
