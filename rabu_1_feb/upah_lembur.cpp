#include <iostream>

using namespace std;

int main()
{
    // deklarasi variable
    int gol, jam_kerja, total;
    char nama[30];

    // input data [Nama, Golongan, Jam Kerja]
    cout << "Masukan Nama : ";
    gets(nama);
    cout << "Golongan : ";
    cin >> gol;
    cout << "Masukan Jam Kerja : ";
    cin >> jam_kerja;

    // Prosess menggunakan switch
    switch (gol)
    {
    case 1:
        // Cek jam kerja apakah lebih dari 8 jam atau tidak menggunakan if
        if (jam_kerja > 8)
        {
            // jika lebih dari 8 jam
            total = 50000 + 10000;
            cout << "Total Upah : " << total;
        } else {
            // jika tidak lebih dari 8 jam
            cout <<  "Total Upah : " << 50000;
        }
        break;
    case 2:
        // Cek jam kerja apakah lebih dari 8 jam atau tidak menggunakan if
        if (jam_kerja > 8)
        {
            // jika lebih dari 8 jam
            total = 60000 + 15000;
            cout << "Total Upah : " << total;
        } else {
            // jika tidak lebih dari 8 jam
            cout <<  "Total Upah : " << 60000;
        }
        break;
    case 3:
        // Cek jam kerja apakah lebih dari 8 jam atau tidak menggunakan if
        if (jam_kerja > 8)
        {
            // jika lebih dari 8 jam
            total = 85000 + 20000;
            cout << "Total Upah : " << total;
        } else {
            // jika tidak lebih dari 8 jam
            cout <<  "Total Upah : " << 85000;
        }
        break;
    
    default:
        cout << "Golongan Dan Jam Kerja Tidak di temukan";
        break;
    }

    return 0;
}
