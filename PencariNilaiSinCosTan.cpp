//Ini adalah sebuah program untuk menghitung sin cos tan biar bisa sigma
//RAAAWRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int pilihan; //Pilihan untuk menentukan apa yang dicari
    double nilai; //Variabel nilai saat diinput
    char ulang;
    do
    {
        cout << "===============================================================" << endl;
        cout << "## Selamat datang di dalam mesin pencarian nilai sin cos tan ##" << endl;
        cout << "===============================================================" << endl;
        cout << endl;
        cout << "Pilih angka 1 untuk mencari nilai sin" << endl;
        cout << "Pilih angka 2 untuk mencari nilai cos" << endl;
        cout << "Pilih angka 3 untuk mencari nilai tan" << endl;
        cout << endl << "Pilih opsi anda : ";
        cin >> pilihan; //Input opsi pilihan

        if (pilihan == 1) 
        {
            cout << endl << "Masukkan angka : ";
            cin >> nilai; //Input nilai
            cout << endl << "Nilai sin dari " << nilai << " adalah : " << sin(nilai) << endl; //Code
        }
        else if (pilihan == 2) 
        {
            cout << endl << "Masukkan angka : ";
            cin >> nilai; //Input nilai
            cout << endl << "Nilai cos dari " << nilai << " adalah : " << cos(nilai) << endl; //Code
        }
        else if (pilihan == 3)
        {
            cout << endl << "Masukkan angka : ";
            cin >> nilai; //Input nilai
            cout << endl << "Nilai tan dari " << nilai << " adalah : " << tan(nilai) << endl; //Code
        }
        else
        {
            cout << endl << "Ckckck, macam tak betol lah anak ni." << endl;
        }
        cout << endl;

        cout << "Mau cari lagi? (y/t) = ";
        cin >> ulang;
        cout << endl;
    }
    while (ulang!= 't');
    cout << "Semangat belajarnya yaa ..." << endl;
    return 0;
}