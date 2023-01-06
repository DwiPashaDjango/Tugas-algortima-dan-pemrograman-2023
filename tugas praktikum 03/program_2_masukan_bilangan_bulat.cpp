#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int bil1, bil2;

    cout << "Masukan Bilangan Bulat Ke 1 : ";
    cin >> bil1;
    cout << "Masukan Bilangan Bulat Ke 2 : ";
    cin >> bil2;

    if (bil1 < 3 && bil2 < 4)
    {
        cout << "Syarat Terpenuhi";
    }
    
    return 0;
}
