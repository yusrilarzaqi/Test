#include <iostream>

int main(){
    int kode;
    std::cout << "masukan kode[1-3] : "; std::cin >> kode;

    switch(kode){
        case 1:
            std::cout << "ayam goreng " << std::endl;
            break;
        case 2:
            std::cout << "bebek goreng" << std::endl;
            break;
        case 3:
            std::cout << "lele goreng" << std::endl;
            break;
        default:
            std::cout << "tidak ada piliha " << std::endl;
            break;
    }



    std::cin.get();
    return 0;
}
