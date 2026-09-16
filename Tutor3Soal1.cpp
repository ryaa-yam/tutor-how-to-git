#include<iostream>

int main(){
    int Tinggi;
    std::cout << "Tinggi? " << std::endl;
    std::cin >> Tinggi;

    for (int baris = 1; baris <= Tinggi ; baris++) {
        for (int kolom = 1; kolom <= Tinggi-baris ; kolom++){
            std::cout << " ";
        }

        for (int bintang = 1; bintang<=2*baris-1;bintang++){
            std::cout << "*";
        }
        std::cout << "\n";
        }
}
