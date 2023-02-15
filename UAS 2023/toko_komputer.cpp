#include <iostream>

using namespace std;

int main()
{
    int dis, qty, kd_merk, tot_har, h_satuan, hb;
    char jb, kd_jenis;

    cout << "Masukan kode Jenis Barang : ";
    cin >> kd_jenis;
    cout << "Masukan kode Merk Barang : ";
    cin >> kd_merk;
    cout << "Masukan Jumlah Barang : ";
    cin >> qty;

    cout << "\n";
    cout << "****************************" << "\n";
    switch (kd_jenis)
    {
    case 'A':
        cout << "Jenis Barang   : " << "CPU" << "\n";
        if (kd_merk == 1)
        {
            h_satuan = 3000000;
            cout << "Merk Barang    : " << "IBM" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 2) {
            h_satuan = 2500000;
            cout << "Merk Barang    : " << "Apple" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 3) {
            h_satuan = 2000000;
            cout << "Merk Barang    : " << "Compaq" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else {
            cout << "Kode Merk Barang Tidak Di Temukan";
        }

        tot_har = qty * h_satuan;
        cout << "Total Harga    : " << tot_har << "\n";

        // switch diskon
        switch (qty)
        {
        case 1 ... 10:
            cout << "Potongan Harga : " << 0 << "\n";
            break;
        case 11 ... 20:
            dis = 0.05 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 21 ... 30:
            dis = 0.1 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 31 ... 40:
            dis = 0.15 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        
        default:
            break;
        }
        // end switch diskon

        hb = (tot_har - dis);
        cout << "Harga Bersih   : " << hb << "\n";
        break;
    
    case 'B' :
        cout << "Jenis Barang   : " << "Monitor" << "\n";
        if (kd_merk == 1)
        {
            h_satuan = 550000;
            cout << "Merk Barang    : " << "TVM" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 2) {
            h_satuan = 1300000;
            cout << "Merk Barang    : " << "NEC" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 3) {
            h_satuan = 450000;
            cout << "Merk Barang    : " << "Polytron" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else {
            cout << "Kode Merk Barang Tidak Di Temukan";
        }

        tot_har = qty * h_satuan;
        cout << "Total Harga    : " << tot_har << "\n";

        // switch diskon
        switch (qty)
        {
        case 1 ... 10:
            cout << "Potongan Harga : " << 0 << "\n";
            break;
        case 11 ... 20:
            dis = 0.05 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 21 ... 30:
            dis = 0.1 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 31 ... 40:
            dis = 0.15 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        
        default:
            break;
        }
        // end switch diskon

        hb = (tot_har - dis);
        cout << "Harga Bersih   : " << hb << "\n";
        break;

    case 'C' :
        cout << "Jenis Barang   : " << "Printer" << "\n";
        if (kd_merk == 1)
        {
            h_satuan = 850000;
            cout << "Merk Barang    : " << "Epson" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 2) {
            h_satuan = 700000;
            cout << "Merk Barang    : " << "Panasonic" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else if(kd_merk == 3) {
            h_satuan = 1800000;
            cout << "Merk Barang    : " << "HP-2P" << "\n";
            cout << "Jumlah Barang  : " << qty << "\n";
            cout << "Harga Satuan   : " << h_satuan << "\n";
        } else {
            cout << "Kode Merk Barang Tidak Di Temukan";
        }   

        tot_har = qty * h_satuan;
        cout << "Total Harga    : " << tot_har << "\n";

        // switch diskon
        switch (qty)
        {
        case 1 ... 10:
            cout << "Potongan Harga : " << 0 << "\n";
            break;
        case 11 ... 20:
            dis = 0.05 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 21 ... 30:
            dis = 0.1 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        case 31 ... 40:
            dis = 0.15 * tot_har;
            cout << "Potongan Harga : " << dis << "\n";
            break;
        
        default:
            break;
        }
        // end switch diskon

        hb = (tot_har - dis);
        cout << "Harga Bersih   : " << hb << "\n";
        break;
    default:
        break;
    }

    return 0;
}