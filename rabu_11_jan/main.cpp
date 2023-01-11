#include <iostream>

using namespace std;

int main()
{
    char nama[25], alamat[50];
    int umur;

    cout << "Masukan Nama Anda : " ;
    gets(nama);
    cout << "Masukan Alamat Anda : ";
    gets(alamat);
    cout << "Masukan Umur Anda : ";
    cin >> umur;

    cout << "Nama Anda : " << nama << endl;
    cout << "Umur Anda :" << umur << endl;
    cout << "Alamat Anda :" << alamat << endl;

    return 0;
}