#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, c, d;
    float i, y;

    cout << "===================================" << endl << endl;
    cout << "Masukan Nilai ke 1 : ";
    cin >> a;
    cout << "Masukan Nilai ke 2 : ";
    cin >> b;
    cout << "Masukan Nilai ke 3 : ";
    cin >> c;

    d = (b*b) - (4*a*c);

    if (a > 0)
    {
        cout << "Ada Dua Akar" << endl;
        cout << "===================================" << endl;
        i = (-b + d) / (2 * a);
        y = (-b - d) / (2 * a);

        cout << "Akar = " << i << endl;
        cout << "Akar = " << y << endl;
    }
    else if (a == 0)
    {
        cout << "Ada Satu Akar" << endl;
        cout << "===================================" << endl;
        i = y = (-b + d) / (2 * a);
        cout << "Akar = " << i << endl;
        cout << "Akar = " << y << endl;
    }
    else
    {
        cout << "Tidak Ada Akar << endl";
    }

    return 0;
}