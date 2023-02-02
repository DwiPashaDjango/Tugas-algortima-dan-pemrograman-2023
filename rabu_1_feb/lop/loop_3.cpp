#include <iostream>

using namespace std;

int main()
{
    int hasil = 0, i;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0 && i != 10)
        {
            hasil = hasil + i;
            cout << i << " + ";
        } else if(i % 2 == 0 && i == 10) {
            hasil = hasil + i;
            cout << i << " = " << hasil;
        }
    }

    cout << "\n";

    hasil = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1 && i != 9)
        {
            hasil = hasil + i;
            cout << i << " + ";
        } else if(i % 2 != 0 && i == 9) {
            hasil = hasil + i;
            cout << i << " = " << hasil;
        }
    }

    return 0;
}