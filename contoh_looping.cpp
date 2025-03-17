#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // perulangan for

    cout << "Perulangan for pencecah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "nilai terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan for pencacah turun" << endl;
    //perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai terakhir = " << n;
    cout << endl;
    cout << "Perulangan while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;
    
}