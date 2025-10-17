#include <iostream>
using namespace std;

//fungsi rekursif untuk menghitung GCD
int gcd(int a, int b){
  if (b == 0)
    return a; // Basis: jika b habis membagi a, kembalikan a
  else
    return gcd(b, a % b);
}

int main() {
  int x, y;

  //input dua bilangan 
  cout << "Masukkan bilangan pertama: ";
  cin >> x;
  cout << "Masukkan bilangan kedua: ";
  cin >> y;

  //Hitung dan tampilkan GCD
  cout << "GCD (FPB) dari " << x << " dan " << y << " adalah: " << gcd(x, y) << endl;

  return 0;
}
