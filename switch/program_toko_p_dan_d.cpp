#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float total;
    int pil, qty;
    string uk;

    cout << "====================== Toko P & D ========================" << endl << endl;
    cout << "==================== Barang Yang Di Jual =================" << endl;
    cout << "No" << "\t" << "Merk    " << "\t" << "Besar     " << "\t" << "Sedang" << "\t" << "Kecil " << endl;
    cout << "1 " << "\t" << "Dancow  " << "\t" << "100000    " << "\t" << "42500 " << "\t" << "21000 " << endl;
    cout << "2 " << "\t" << "Indomilk" << "\t" << "85000     " << "\t" << "40000 " << "\t" << "20250 " << endl;
    cout << "3 " << "\t" << "Milo    " << "\t" << "77500     " << "\t" << "37500 " << "\t" << "22000 " << endl;
    cout << "4 " << "\t" << "Suprima " << "\t" << "96000     " << "\t" << "51000 " << "\t" << "26000 " << endl;
    cout << "5 " << "\t" << "Sustagen" << "\t" << "170000    " << "\t" << "145000" << "\t" << "83000 " << endl;
    cout << "6 " << "\t" << "Ovaltine" << "\t" << "112000    " << "\t" << "65000 " << "\t" << "32500 " << endl << endl;

    cout << "Masukan No Barang : ";
    cin >> pil;
    cout << "Masukan Ukuran Barang [Besar/Sedang/Kecil] : ";
    cin >> uk;
    cout << "Masukan Jumlah Barang Yang Di Beli : ";
    cin >> qty;

    switch (pil)
    {
    case 1:
        if (uk == "Besar")
        {
            total = 100000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 42500 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Kecil")
        {
            total = 21000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 2:
        if (uk == "Besar")
        {
            total = 85000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 40000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Sedang")
        {
            total = 20250 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 3:
        if (uk == "Besar")
        {
            total = 77500 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 37500 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil")
        {
            total = 22000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 4:
        if (uk == "Besar")
        {
            total = 96000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 51000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil")
        {
            total = 26000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 5:
        if (uk == "Besar")
        {
            total = 170000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 145000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil")
        {
            total = 83000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 6:
        if (uk == "Besar")
        {
            total = 112000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang")
        {
            total = 65000 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil")
        {
            total = 32500 * qty;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    
    default:
        cout << "Total Pembayaran : " << "Utanggggggggg !!!!!!!!" << endl;
        break;
    }
    
    return 0;
}