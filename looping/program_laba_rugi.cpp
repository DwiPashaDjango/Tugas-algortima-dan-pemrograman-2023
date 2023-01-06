#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double hj = 6000, bt = 50000, bb = 3500;
    double lr;
    int n[4] = {5, 10, 15, 20}; 

    // proses
    cout << "================== Table Rugi Laba Produksi ===============" << endl;
    cout << "===========================================================" << endl;
    cout << "Jumlah Produksi" << "\t" "\t" << "Jumlah R/L" << "\t" "\t" <<  "Keterangan" << endl;
    for (int i = 0; i < 4; i++)
    {
        lr = hj * n[i] - (bt + bb);
        if (lr >= bt)
        {
            cout << n[i] << "\t" "\t" "\t" << lr << "\t" "\t" "\t" << "Laba" << endl;
        }
        else if (lr >= hj)
        {
            cout << n[i] << "\t" "\t" "\t" << lr << "\t" "\t" "\t" << "Impas" << endl;
        }
        else
        {
            cout << n[i] << "\t" "\t" "\t" << lr << "\t" "\t" "\t" << "Rugi" << endl;
        }
    }

    return 0;
}