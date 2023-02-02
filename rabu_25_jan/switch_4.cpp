#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float total;
    int pil, qty;
    string uk, nm_produk;

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
        nm_produk = "Dancow";
        if (uk == "Besar" || uk == "besar")
        {
            total = 100000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 42500 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran \t : " << total << endl;
        }
        else if (uk == "Kecil" || uk == "kecil")
        {
            total = 21000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran \t : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 2:
        nm_produk = "Indomilk";
        if (uk == "Besar" || uk == "besar")
        {
            total = 85000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 40000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "kecil" || uk == "kecil")
        {
            total = 20250 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 3:
        nm_produk = "Milo";
        if (uk == "Besar" || uk == "besar")
        {
            total = 77500 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 37500 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil" || uk == "kecil")
        {
            total = 22000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 4:
        nm_produk = "Suprima";
        if (uk == "Besar" || uk == "besar")
        {
            total = 96000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 51000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil" || uk == "kecil")
        {
            total = 26000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 5:
        nm_produk = "Sustagen";
        if (uk == "Besar" || uk == "besar")
        {
            total = 170000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 145000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil" || uk == "kecil")
        {
            total = 83000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else
        {
            cout << "Ukuran Tidak Ada ! " << endl;
        }
        break;
    case 6:
        nm_produk = "Ovaltine";
        if (uk == "Besar" || uk == "besar")
        {
            total = 112000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if (uk == "Sedang" || uk == "sedang")
        {
            total = 65000 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
            cout << "Total Pembayaran : " << total << endl;
        }
        else if(uk == "Kecil" || uk == "kecil")
        {
            total = 32500 * qty;
            cout << "Nama Produk \t : " << nm_produk << endl;
            cout << "Jumlah Produk \t : " << qty << endl;
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