#include <iostream>
#include <math.h>

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

    if (d > 0)
    {
        cout << "===================================" << endl;
        cout << "Ada Dua Akar" << endl;
        cout << "===================================" << endl;
        i = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);

        cout << "Akar 1 = " << i << endl;
        cout << "Akar 2 = " << y << endl;
        cout << "===================================" << endl;
    }
    else if (d == 0)
    {
        cout << "===================================" << endl;
        cout << "Ada Satu Akar" << endl;
        cout << "===================================" << endl;
        i = y = (-b + sqrt(d)) / (2 * a);
        cout << "Akar = " << i << endl;
        cout << "===================================" << endl;
    }
    else
    {
        cout << "===================================" << endl;
        cout << "Tidak Ada Akar" << endl;
        cout << "===================================" << endl;
    }

    return 0;
}