#include <iostream>

using namespace std;

int main()
{
    // deklarasi variable
    char status;
    int total, dis;

    // inout total dan status pelanggan
    cout << "Masukan Total Pembayaran : ";
    cin >> total;
    cout << "Status Pelanggan [L|B] : ";
    cin >> status;

    // proses dengan switch
    switch (status)
    {
    // jika statusnya langganan
    case 'L':
        // cek total pembelian
        if (total > 50000)
        {
            // jika totalnya lebih besar dari 50000
            dis = total * 20/100;
            cout << "Total Pembayaran : " << dis;
        }
        else if (total < 50000)
        {
            // jika totalnya lebih kecil dari 50000
            dis = total * 10/100;
            cout << "Total Pembayaran : " << dis;   
        }
        
        break;

    // jika statusnya bukan langganan
    case 'B':
        cout << "Total Pembayaran : " << total;    
        break;
    

    // jika uttttaaanggg
    default:
        cout << "Uttttangggggggg : ";    
        break;
    }

    return 0;
}
