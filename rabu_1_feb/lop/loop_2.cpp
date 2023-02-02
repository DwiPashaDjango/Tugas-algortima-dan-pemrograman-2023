#include <iostream>

using namespace std;

int main()
{
    int hasil = 0;
    for (int i = 1; i <= 5; i++)
    {
        hasil = hasil + i;
        if (i != 5)
        {
            cout << i << " + ";
        } else {
            cout << i << " = " << hasil;
        }
    }
    
    return 0;
}