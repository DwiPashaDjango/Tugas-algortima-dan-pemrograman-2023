#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nilai;
    char hasil;

    cout << "Masukan Nilai : " ;
    cin >> nilai;

    if (nilai > 8)
    {
        hasil = 'A';
    }

    cout << "Nilai " << nilai << " Adalah = " << hasil;
    

    return 0;
}
