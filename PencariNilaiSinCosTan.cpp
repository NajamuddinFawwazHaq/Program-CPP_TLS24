//Ini adalah sebuah program untuk menghitung sin cos tan biar bisa sigma
//RAAAWRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int pilihan; //Pilihan untuk menentukan apa yang dicari
    double nilai; //Variabel nilai saat diinput 
    cout << "=========================================================" << endl; //Hiasan doang, biar bagus wkwkw
    cout << "Selamat datang di dalam mesin pencarian nilai sin cos tan" << endl;
    cout << "Pilih angka 1 untuk mencari nilai sin" << endl;
    cout << "Pilih angka 2 untuk mencari nilai cos" << endl;
    cout << "Pilih angka 3 untuk mencari nilai tan" << endl;
    cout << endl << "Pilih opsi anda : ";
    cin >> pilihan; //Input opsi pilihan
    cout << endl << "Masukkan angka : ";
    cin >> nilai; //Input nilai

    if (pilihan == 1) 
    {
        cout << endl << "Nilai sin dari " << nilai << " adalah : " << sin(nilai) << endl; //Code
    }
    else if (pilihan == 2) 
    {
        cout << endl << "Nilai cos dari " << nilai << " adalah : " << cos(nilai) << endl; //Code
    }
    else if (pilihan == 3)
    {
        cout << endl << "Nilai tan dari " << nilai << " adalah : " << tan(nilai) << endl; //Code
    }
    else
    {
        cout << endl << "Error woy, suruh isi 1 sampai 3 aja malah milih yang lain. Di suruh milih aku atau dia, malah milih kamu" << endl;
    } // Ceritanya sebel aja sih, suruh ngisi sesuai petunjuk malah nggak nurut
    return 0;
}