#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float upah;
    double total;
    int gol, jam_kerja;
    string nama;

    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Golongan [1/2/3] : ";
    cin >> gol;
    cout << "Masukan Jam Kerja : ";
    cin >> jam_kerja;

    switch (gol)
    {
    case 1:
        if (jam_kerja >= 8)
        {
           upah = 50000 + 10000;
        }
        else
        {
            upah = 50000;
        }
        break;
    case 2:
        if (jam_kerja >= 8)
        {
           upah = 60000 + 15000;
        }
        else
        {
            upah = 60000;
        }
        break;
    case 3:
        if (jam_kerja >= 8)
        {
           upah = 85000 + 20000;
        }
        else
        {
            upah = 60000;
        }
        break;
    default:
        cout << "Gaji Anda Di Korup Oleh Bos";
        break;
    }

    cout << "Total Upah : " << upah << endl;

    return 0;
}
