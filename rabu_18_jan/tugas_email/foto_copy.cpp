#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int lbr, harga, bayar;
    char st;

    cout << "     Foto Kopi Karya Budi      \n";
    cout << "===============================\n";

    cout << "Banyaknya Jumlah Lembar : ";
    cin >> lbr;
    cout << "Status Pelanggan [L/B] : ";
    cin >> st;

    if (st == 'L')
    {
            harga = 150;
    } else {
        harga = 200;
    }
    
    bayar = harga * lbr;
    
    cout << "Harga Perlembar : " << harga << endl;
    cout << "Anda Harus Membayar Sebesar " << lbr << " x " << harga << " = Rp." << bayar;

    return 0;
}