#include <iostream>
using namespace std;

float luasPersegiPanjang(float a, float b){
    return a * b;
}

float luasLingkarang(float a){
    return 3.14*a*a;
}

int main() {
    int pilihan;
    float panjang, lebar;
    float jejari;


do{
    cout << "Menu" << endl;
    cout << "1. luas persegi panjang" << endl;
    cout << "2. luas lingkarang" << endl;
    cout << "3. keluar" << endl;

    cout << "Pilihan (1/2/3) = ";
    cin >> pilihan;

    switch (pilihan)
    {
        case 1:
            cout << "Hitung luas persegi panjang " << endl;
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebar = ";
            cin >> lebar;
            cout << "Luas persegi panjang = " << luasPersegiPanjang(panjang, lebar);
            break;
        case 2:
            cout << "Hitung luas lingkaran" << endl;
            cout << "Masukkan jari-jari = ";
            cin >> jejari;
            cout << "Luas lingkaran = " << luasLingkarang(jejari) << endl;
            break;
        case 3:
            break;
        default:
            cout << "Pilihan salah, pilihan harus di antara 1-3";
            break;


    }
}while(pilihan != 3);
}
