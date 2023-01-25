#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char simbol;

    cout << "Masukan Nilai Pertama : ";
    cin >> a;
    cout << "Masukan Operator [+, -, /, *] : ";
    cin >> simbol;
    cout << "Masukan Nilai Kedua : ";
    cin >> b;

    switch (simbol)
    {
    case '+':
        c = a + b;
        cout << "Jumlah : " << c;
        break;
    
    case '-':
        c = a-b;
        cout << "Jumlah : " << c;
        break;
    case '/':
        c = a/b;
        cout << "Jumlah : " << c;
        break;
    case '*':
        c = a*b;
        cout << "Jumlah : " << c;
        break;

    default:
        printf("Bukan Operator MTK !");
        break;
    }   

    return 0;
}
