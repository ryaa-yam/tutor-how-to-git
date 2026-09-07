#include<iostream>
#include<cmath>

int main () {
    float tinggiKerucut;
    float radiusKerucut;
    float phi = 3.14;

    std::cout << "Tinggi kerucut? ";
    std::cin >> tinggiKerucut;
    std::cout << "Radius kerucut? ";
    std::cin >> radiusKerucut ;

    //calc
    float luasKerucut = phi*std::pow(radiusKerucut,2);
    float volumeKerucut = phi*std::pow(radiusKerucut,2)*tinggiKerucut/3 ; 

    //output
    std::cout << "luas: " << luasKerucut << "\n" << "volume: " << volumeKerucut ; 

}

// luas alas pi x r^2, volume 1/3 x pi x r^2 x t