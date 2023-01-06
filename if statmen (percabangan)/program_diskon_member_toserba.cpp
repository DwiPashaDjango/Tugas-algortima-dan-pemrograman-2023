#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double total, dis;
    string status;

    cout << "Masukan Total Belanja : ";
    cin >> total;
    cout << "Masukan Status : ";
    cin >> status;

    if (total >= 50000 && status == "pelanggan")
    {
        dis = total * 20/100;
        cout << "Total Pembayaran : " << dis << endl;
    }
    else if (status == "pelanggan" && total <= 50000)
    {
        dis = total * 10/100;
        cout << "Total Pembayaran : " << dis << endl;
    }
    else
    {
        cout << "Total Pembayaran : " << total;
    }
    
    return 0;
}
