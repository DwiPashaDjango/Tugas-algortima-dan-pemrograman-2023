#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, y, ts = 4;

    for (i = 0; i < ts; i++)
    {
        for (y = 1; y <= ts - i; y++)
        {
            cout << " *";
        }
        cout << '\n';
    }
    
    return 0;
}