#include<iostream>
#include<stdlib.h>

int main(){
    int kodePembelian;
    long nominalPembayaran;
    long hargaBarang;
    int pecahan1000;
    int pecahan5000;

//question
    std::cout << "=== Automatic Vending Machine ===" << std::endl;
    std::cout << "Pilihan minuman" << std::endl;
    std::cout << "1. Air Mineral = Rp 4.000\n" << "2. Teh Botol = Rp 6.000\n" << "3. Kopi Susu = Rp 10.000" << std::endl;
    std::cout << "Pilih kode minuman (1-3) : " << std::endl;
    std::cin >> kodePembelian;
    std::cout << "Masukkan nominal uang anda : ";
    std::cin >> nominalPembayaran;

//processing
    switch (kodePembelian)
    {
    case 1:
        hargaBarang = 4000;
        break;
    case 2:
        hargaBarang = 6000;
        break;
    case 3:
        hargaBarang = 10000;
        break;
    default:
        std::cout << "Error! (Kode Invalid)";
        break;
    }
    
    //Calculate change
    long nominalKembalian = nominalPembayaran-hargaBarang;
    if (nominalPembayaran>hargaBarang)
    {
        pecahan5000 = nominalKembalian/5000;
        //remaining change
        long sisa = nominalKembalian%5000;
        pecahan1000 = sisa/1000;

    }
    

//Output
    std::cout << "=== Detail Transaksi ===" << std::endl;
    if (nominalPembayaran<hargaBarang){
        std::cout << "Transaksi Gagal! Uang anda kurang : Rp." << abs(nominalKembalian);
        return 0;
    } else {  
        std::cout << "Kembalian total : Rp." << nominalKembalian << std::endl;
        std::cout << "Pecahan 5k : " << pecahan5000 << "\nPecahan 1k : " << pecahan1000;
    }
}