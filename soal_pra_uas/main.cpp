#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int harga_awal, diskon, harga_akhir;
  int persentase_diskon;

  cout << "Masukkan harga awal: ";
  cin >> harga_awal;
  cout << "Masukkan persentase diskon: ";
  cin >> persentase_diskon;

  diskon = harga_awal * persentase_diskon / 100.0;
  harga_akhir = harga_awal - diskon;

  cout << "Harga setelah diskon: " << harga_akhir << endl;

  return 0;
}