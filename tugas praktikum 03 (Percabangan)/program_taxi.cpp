#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int jarak, bayar;

    cout << "Jarak Yang Di Tempuh : ";
    cin >> jarak;

    if (jarak > 1)
    {
        bayar = 7500 + ( (jarak-1) * 3500);
    }
    else
    {
        bayar = 7500;
    }
    
    cout << "===========================" << endl;
    cout << "Yang Harus Di Bayar : " << bayar;

    return 0;
}
