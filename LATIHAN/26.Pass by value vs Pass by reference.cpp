#include <iostream>
using namespace std;

void ubahValue(int a) {
  a = a + 10;
  cout << "Nilai di dalam fungsi (pass by value): " << a << endl;
}
void ubahReference(int b) {
  b = b + 10;
  cout << "Nilai didalam fungsi (pass by reference): " << b << endl;
}

int main() {
  int x = 5;
  int y = 5;
  cout << "Sebelum fungsi dipanggil: " << endl;
  cout << "X = " << x << " (untuk pass by value)" << endl;
  cout << "Y = " << y << " (untuk pass by reference)" << endl;

  cout << "\nMemanggil fungsi pass by value..." << endl;
  ubahValue(a);
  cout << "Nilai x setelah fungsi (pass by value): " << a << endl;

  cout << "\nMemanggil fungsi pass by reference..." << endl;
  ubahReference(b);
  cout << "Nilai y setelah fungi (pass by reference): " << b << endl;

  return 0;
}
