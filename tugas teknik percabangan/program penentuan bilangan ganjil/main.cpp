#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int bill;

    cout << "Masukan Bilangan : ";
    cin >> bill;

    if (bill % 2 == 0)
    {
        cout << bill << " Adalah Bilangan Genap";
    }
    else
    {
        cout << bill << " Adalah Bilangan Ganjil";
    }
    
    return 0;
}
