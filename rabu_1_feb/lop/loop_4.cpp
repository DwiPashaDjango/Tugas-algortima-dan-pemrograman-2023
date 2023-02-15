#include <iostream>

using namespace std;

int main()
{
    int i, brs;
    cout << "Masukan Baris : ";
    cin >> brs;

    for (i = 1; i <= brs; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << "\n";
    }

    for (i = brs; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    
    
    return 0;
}