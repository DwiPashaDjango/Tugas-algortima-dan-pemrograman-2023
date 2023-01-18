#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int s1, s2, s3;

    cout << "Masukan Nilai Panjang Ke 1 : ";
    cin >> s1;
    cout << "Masukan Nilai Panjang Ke 2 : ";
    cin >> s2;
    cout << "Masukan Nilai Panjang Ke 3 : ";
    cin >> s3;

    if (s1 == s2 && s1 == s3 && s2 == s3)
    {
        cout << "Termasuk Kubus";
    } else {
        cout << "Bukan Termasuk Kubus";
    }
    
    return 0;
}