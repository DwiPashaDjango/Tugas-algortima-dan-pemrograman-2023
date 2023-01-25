#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Mausukan Bulan Dengan Angka : ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "Maret";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "Mei";
        break;
    case 6:
        cout << "Juni";
        break;
    case 7:
        cout << "Juli";
        break;
    case 8:
        cout << "Agustus";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "Oktober";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "Desember";
        break;
    
    default:
        cout << "Bulan Tidak Ada";
        break;
    }

    return 0;
}