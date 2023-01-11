#include <iostream>

using namespace std;

int main()
{
    int p, l, hasil;

    cout << "Masukan Bilangan Ke 1 : ";
    cin >> p;
    cout << "Masukan Bilangan Ke 2 : ";
    cin >> l;

    hasil = 2 * (p + l);

    cout << "Keliling Persegi Panjang Adalah : " << hasil;
    
    return 0;
}