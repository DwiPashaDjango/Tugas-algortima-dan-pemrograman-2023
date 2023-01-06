#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    string p;

    cout << "Masukan Bilangan Bulat Pertama : ";
    cin >> x;
    cout << "Pilih Operator + - : ";
    cin >> p;
    cout << "Masukan Bilangan Bulat Kedua : ";
    cin >> y;

    if (p == "+")
    {
        cout << "Hasil = " << x + y;
    }
    else
    {
        cout << "Hasil = " << x - y;
    }
    
    return 0;
}