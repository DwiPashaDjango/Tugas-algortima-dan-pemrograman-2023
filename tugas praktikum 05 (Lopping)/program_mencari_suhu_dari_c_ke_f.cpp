#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cAwal, cAkhir, i, y;
    float fhr;

    cout << "Masukan Nilai Celcius Awal : ";
    cin >> cAwal;
    cout << "Masukan Nilai Celcius Akhir : ";
    cin >> cAkhir;

    cout << "=========== Tabel Konversi Suhu ===========" << endl << endl;
    cout << "No" << "\t" "\t" << "Celcius" << "\t" "\t" << "Fahrenheit" << endl;

    y = 1;

    for (int i = cAwal; i <= cAkhir; i++)
    {
        fhr = 1.8 * i + 34;
        cout << y++;
        cout << "\t" "\t" << i << "\t" "\t" << fhr << endl;
    }    
    return 0;
}