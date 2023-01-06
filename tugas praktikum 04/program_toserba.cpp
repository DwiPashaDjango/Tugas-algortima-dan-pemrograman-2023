#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int qty, pil;
    float harga, total;
    double dis;
    string member;

    cout << "================= Program Toserba ==================" << endl << endl;
    cout << "=============== Barang Yang Di Jual ================" << endl;
    cout << "No   " << "Merk                    " << "Harga " << endl;
    cout << "1    " << "Snack                   " << "60000 " << endl;
    cout << "2    " << "Susu                    " << "45000 " << endl << endl;

    cout << "Masukan Nomor Menu : " ;
    cin >> pil;
    cout << "Masukan Jumlah Barang Yang Di Beli : " ;
    cin >> qty;
    cout << "Masukan Harga Barang Yang Di Beli : " ;
    cin >> harga;
    cout << "Masukan Status Pembeli : " ;
    cin >> member;

    total = harga * qty;

    switch (pil)
    {
    case 1:
        if (member == "langganan" && harga >= 50000)
        {
            dis = total * 20/100;
            cout << "Total Pembayaran : " << dis;
        }
        else if (member == "langganan" && harga <= 50000)
        {
            dis = total * 10/100;
            cout << "Total Pembayaran : " << dis;
        }
        else
        {
            cout << "Total Pembayaran : " << total;
        }
        break;
    case 2:
        if (member == "langganan" && harga >= 50000)
        {
            dis = total * 20/100;
            cout << "Total Pembayaran : " << dis;
        }
        else if (member == "langganan" && harga <= 50000)
        {
            dis = total * 10/100;
            cout << "Total Pembayaran : " << dis;
        }
        else
        {
            cout << "Total Pembayaran : " << total;
        }
        break;
    
    default:
        cout << "Menu Tidak Ada !" << endl;
        break;
    }   

    return 0;
}