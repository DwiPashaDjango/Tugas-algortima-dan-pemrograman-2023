#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int p, l, k;

    cout << "Masukan Bilangan Pertama : ";
    cin >> p;
    cout << "Masukan Bilangan Kedua : ";
    cin >> l;

    k = 2 * (p + l);

    cout << "Hasil  = " << k;

    return 0;
}