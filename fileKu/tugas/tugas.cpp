#include <iostream>

using namespace std;




int main(){
    int kode;
    cout << "masukan kode : "; cin >> kode;

    if(kode == 1){
        cout << "Ayam goreng" << endl;
    }else if(kode == 2){
        cout << "Bebek goreng" << endl;
    }else if(kode == 3){
        cout << "Lele goreng" << endl; 
    }else{
        cout << "tidak semuanya" << endl;
    }


    cin.get();
    return 0;
}
