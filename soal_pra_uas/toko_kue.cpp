#include <iostream>

using namespace std;

int main()
{
    int kd_kue, jum_kue, harga, dis, tot_har
    double tot_bar;
    char nama[50];
    string nm_kue;

    cout << "============= Daftar Menu =============" << "\n";
    cout << "1. Bolu Black Florest" << "\n";
    cout << "2. Cup Cake" << "\n";
    cout << "3. Banana Cake" << "\n";
    cout << "4. Strawbery Cake" << "\n";

    cout << "\n";

    cout << "============= Data Pembeli =============" << "\n";
    cout << "Nama Pembeli       : ";
    gets(nama);
    cout << "Kode Kue [1/2/3/4] : ";
    cin >> kd_kue;
    cout << "Jumlah Kue         : ";
    cin >> jum_kue;

    cout << "\n";

    cout << "=========== Struk Pembayaran ===========" << "\n";
    switch (kd_kue)
    {
    case 1:
        harga = 50000;
        nm_kue = "Bolu Black Florest";
        tot_har = jum_kue * harga;
        cout << "Nama Pembeli : " << nama << "\n";
        cout << "Kode Kue     : " << kd_kue << "\n";
        cout << "Nama Kue     : " << nm_kue << "\n";
        cout << "Harga Kue    : " << "Rp." << harga << "\n";
        cout << "Jumlah Kue   : " << jum_kue << " Buah" << "\n";
        cout << "Total Harga  : " << "Rp." << tot_har << "\n";
        cout << "======================================" << "\n";

        if (jum_kue > 20)
        {
            dis =  0.2 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else if(jum_kue > 10) {
            dis =  0.05 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else {
            cout << "Total Bayar  : Rp." << tot_har;
        }
        break;
    case 2:
        harga = 40000;
        nm_kue = "Cup Cake";
        tot_har = jum_kue * harga;
        cout << "Nama Pembeli : " << nama << "\n";
        cout << "Kode Kue     : " << kd_kue << "\n";
        cout << "Nama Kue     : " << nm_kue << "\n";
        cout << "Harga Kue    : " << "Rp." << harga << "\n";
        cout << "Jumlah Kue   : " << jum_kue << " Buah" << "\n";
        cout << "Total Harga  : " << "Rp." << tot_har << "\n";
        cout << "======================================" << "\n";

        if (jum_kue > 20)
        {
            dis =  0.2 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else if(jum_kue > 10) {
            dis =  0.05 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else {
            cout << "Total Bayar  : Rp." << tot_har;
        }
        break;
    case 3:
        harga = 25000;
        nm_kue = "Banana Cake";
        tot_har = jum_kue * harga;
        cout << "Nama Pembeli : " << nama << "\n";
        cout << "Kode Kue     : " << kd_kue << "\n";
        cout << "Nama Kue     : " << nm_kue << "\n";
        cout << "Harga Kue    : " << "Rp." << harga << "\n";
        cout << "Jumlah Kue   : " << jum_kue << " Buah" << "\n";
        cout << "Total Harga  : " << "Rp." << tot_har << "\n";
        cout << "======================================" << "\n";

        if (jum_kue > 20)
        {
            dis =  0.2 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else if(jum_kue > 10) {
            dis =  0.05 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else {
            cout << "Total Bayar  : Rp." << tot_har;
        }
        break;
    case 4:
        harga = 30000;
        nm_kue = "Strawbery Cake";
        tot_har = jum_kue * harga;
        cout << "Nama Pembeli : " << nama << "\n";
        cout << "Kode Kue     : " << kd_kue << "\n";
        cout << "Nama Kue     : " << nm_kue << "\n";
        cout << "Harga Kue    : " << "Rp." << harga << "\n";
        cout << "Jumlah Kue   : " << jum_kue << " Buah" << "\n";
        cout << "Total Harga  : " << "Rp." << tot_har << "\n";
        cout << "======================================" << "\n";

        if (jum_kue > 20)
        {
            dis =  0.2 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else if(jum_kue > 10) {
            dis =  0.05 * tot_har;
            cout << "Diskon       : " << "Rp." << dis << "\n";
            cout << "======================================" << "\n";
            tot_bar = (tot_har - dis);
            cout << "Total Bayar  : Rp." << tot_bar;
        } else {
            cout << "Total Bayar  : Rp." << tot_har;
        }
        break;
    
    default:
        cout << "          Kode tidak di temukan !       " << "\n";
        cout << "========================================" << "\n";
        break;
    }

    return 0;
}