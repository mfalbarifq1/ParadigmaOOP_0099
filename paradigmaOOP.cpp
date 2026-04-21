#include <iostream>
using namespace std;

class Barang {
public :
       string nama;
        int jumlah;
        string kategori;
        char tanggalProduksi;

    void SpesifikasiBarang() {
             cout << "NAMA : " << nama << endl;
             cout << "jumlah: " << jumlah << endl;
             cout << "kategori : " << kategori << endl;
             cout << "tanggalProduksi : " << tanggalProduksi << endl;

  }
};
        

int main(){
    Barang Elektronik;
    Elektronik.nama = "kulkas";
    Elektronik.jumlah = 1;
    Elektronik.kategori = "Elektronik";
    Elektronik.SpesifikasiBarang();

   
 Barang NonElektronik;
    NonElektronik.nama = "sepatu";
    NonElektronik.jumlah = 20;
    NonElektronik.kategori = "NonElektronik";
    
    NonElektronik.SpesifikasiBarang();
}