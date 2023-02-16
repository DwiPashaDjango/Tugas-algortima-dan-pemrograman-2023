#include <iostream>

using namespace std;

int main()
{
    int hasil = 0, i = 1;
    cout << "Bilangan 1 sd 10" << " = ";
    while (i <= 10)
    {
        cout << i << "  ";
        i++;   
    }

    cout << "\n";

    i = 1;
    hasil = 0;
    while (i <= 10)
    {
        if (i % 2 == 0 && i != 10)
        {
            hasil = hasil + i;
        } else if(i % 2 == 0 && i == 10) {
            hasil = hasil + i;
            cout << "- Jumlah Bilangan Genap 1 sd 10" << " = " << hasil << "\n";
        }
        i++;
    }

    i = 1;
    hasil = 0;
    while (i <= 10)
    {
        if (i % 2 == 1 && i != 9)
        {
            hasil = hasil + i;
        } else if(i % 2 == 1 && i == 9) {
            hasil = hasil + i;
            cout << "- Jumlah Bilangan ganjil 1 sd 10" << " = " << hasil << "\n";
        }
        i++;
    }

    return 0;
}