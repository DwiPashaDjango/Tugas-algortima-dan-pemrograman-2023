#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    bool vokal_1, vokal_2;

    cout << "Masukan Suatu Alphabet : ";
    cin >> c;

    vokal_1 = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    vokal_2 = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        printf("Error ! Bukan karakter");
    }
    else if (vokal_1 || vokal_2)
    {
        cout << c << " Adalah huruf vokal.";
    }
    else
    {
        cout << c << " Adalah huruf konsonan.";
    }

    return 0;
}