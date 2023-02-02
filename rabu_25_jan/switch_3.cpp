#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Nia;

    cout << "Masukan Nilai Akhir : ";
    cin >> Nia;

    switch (Nia)
    {
    case 85 ... 100:
        cout << "Huruf Mutu = A";
        break;
    case 75 ... 84:
        cout << "Huruf Mutu = B";
        break;
    case 65 ... 74:
        cout << "Huruf Mutu = C";
        break;
    case 55 ... 64:
        cout << "Huruf Mutu = D";
        break;
    case 0 ... 54:
        cout << "Huruf Mutu = E";
        break;
    
    default:
        cout << "Tidak Terdefinisi";
        break;
    }

    return 0;
}