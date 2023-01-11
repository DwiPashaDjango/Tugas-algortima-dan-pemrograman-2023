#include <iostream>

using namespace std;

int main()
{
    double r, phi = 3.14, luas;

    cout << "Masukan Jari Jari Lingkaran : ";
    cin >> r;

    luas = phi * r * r;
    cout << "Luas Lingkaran Dengan Jari Jari " << r << "Adalah : " << luas;

    return 0;
}