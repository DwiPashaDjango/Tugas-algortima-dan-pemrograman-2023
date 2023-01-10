#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // deklaraasi variable
    int member = 3000, no_hp;
    int hit, total, pulsa;
    char nama[255], alamat;

    // input data
    cout << "Masukan Nomor : ";
    cin >> no_hp;
    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Alamat : ";
    cin >> alamat;
    cout << "Masukan Pemakaian Pulsa : ";
    cin >> pulsa;

    // proses
    hit = pulsa * 100;

    // output
    cout << "=====================================" << endl;
    cout << "Biaya Langganan : " << member << endl;
    cout << "Biaya Pulsa : " << hit << endl;
    cout << "=====================================" << endl;
    cout << "Total Pembayaran : " << member + hit << endl;
    return 0;
}
