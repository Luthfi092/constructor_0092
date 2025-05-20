//Buatlah Program C++ dengan class barang yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki constructor berparameter
//untuk mengisi nilai namaBarang dsn kodeBarang
//serta memiliki fungsi untuk menampilkan informasi barang



#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor dengan parameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInformasi() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

