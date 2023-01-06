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

    cout << "================ Tabel Konversi Suhu ================" << endl << endl;
    cout << "No                 " << "Celcius               " << "Fahrenheit" << endl;

    for (y = 1; y <= cAkhir; y++)
    {
        cout << y << endl;
        for (i = cAwal; i <= cAkhir; i++)
        {
            fhr = 1.8 * i + 34;
            cout << "                    " << i << "                    " << fhr << endl;
        }
    }
    return 0;
}