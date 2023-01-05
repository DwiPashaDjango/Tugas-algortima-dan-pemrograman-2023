#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, y;
    for (i = 1; i <= 5; i++)
    {
        for (y = 1; y <= i; y++)
        {
            cout << "* " ;
        }
        cout << "\n" ;
    }
       
    return 0;
}