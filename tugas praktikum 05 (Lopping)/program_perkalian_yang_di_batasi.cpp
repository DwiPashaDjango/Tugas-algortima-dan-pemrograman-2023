#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int awal, akhir, i, total;   

    cout << "Masukan Bilangan Pertama : ";
    cin >> awal;
    cout << "Masukan Bilangan Kedua   : ";
    cin >> akhir;

    total = 1;
    for (int i = awal; i <= akhir; i++)
    {
        cout << " x " << i;
        total = total * i;
    }
    
    cout << " = " << total << endl;

    return 0;
}