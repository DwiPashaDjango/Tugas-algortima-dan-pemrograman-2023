#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, y ,hasil = 0;

    cout << "Ketik Perkalian : ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            hasil = i * y;
            cout << i << " x " << y << " = " << hasil <<"\n";
        }
    }
       
    return 0;
}