#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;

    cout << "Masukan Bilangan Ke 1 " ;
    cin >> a;   
    cout << "Masukan Bilangan Ke 2 " ;
    cin >> b; 

    if (a > 3 && b > 4)
    {
        cout << "Syarat Terpenuhi";
    }

    return 0;
}