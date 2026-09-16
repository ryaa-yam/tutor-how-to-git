#include<iostream>

int main(){
    int nilaiAngka;
    char nilaiMutu;
    std::string statusLulus = "";

    //in nilai
    std::cout << "Input nilai: ";
    std::cin >> nilaiAngka;

    if (nilaiAngka >= 80)
    {
        nilaiMutu = 'A';
    } else if (nilaiAngka >=68 && nilaiAngka <80) {
        nilaiMutu = 'B';
    } else if (nilaiAngka >=56 && nilaiAngka <78) {
        nilaiMutu = 'C';
    } else if (nilaiAngka >=45 && nilaiAngka <56) {
        nilaiMutu = 'D';
    } else if (nilaiAngka < 45) {
        nilaiMutu = 'E';
    } 

        if (nilaiAngka >= 65) {
        statusLulus = "Lulus";
        } 
        else if (nilaiAngka < 65) {
        statusLulus = "Tidak Lulus";
        }

    std::cout << "Nilai mutu : " <<  nilaiMutu << "\n" << "Status lulus : " << statusLulus << std::endl;
}

    
    