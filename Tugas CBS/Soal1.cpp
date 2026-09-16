#include<iostream>

int main(){
    float totalBelanja;
    float totalDiskon;
    std::string besarDiskon = "";

//question
    std::cout << "Masukkan harga total pembelian : ";
    std::cin >> totalBelanja;

//calculate discount value
    if(totalBelanja<100000){
        totalDiskon = 0;
        besarDiskon = "0";
    } else if(totalBelanja>=100000 && totalBelanja<300000){
        totalDiskon = 0.1;
        besarDiskon = "10";
    } else {
        totalDiskon = 0.2;
        besarDiskon = "20";
    }
        
//calculate discounted price
    int hargaDiskon = totalBelanja*totalDiskon;
    int hargaAkhir = totalBelanja-hargaDiskon;

//output
    std::cout << "--- Kalkulator Kasir Toko ---" << std::endl;
    std::cout << "Total belanja pembeli : " << totalBelanja << std::endl;
    std::cout << "\n" << "--- Ringkasan Pembayaran ---" << std::endl;
    std::cout << "Diskon (" << besarDiskon << "%) \t : Rp " << hargaDiskon << "" << std::endl;
    std::cout << "Total bayar \t : Rp " << hargaAkhir;
}