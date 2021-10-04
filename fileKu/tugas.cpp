#include <iostream>
#include <array>
using namespace std;

int main(){
    int num;
    cout << "Berapa jumlah data : "; cin >> num;
    // array<int, num>nilai;
    int nilai[num];

    cout << "\nINPUT" << endl;
    for(int i=1; i <= num; i++){
        cout << "Nilai data ke-" << i << " : ";
        cin >> nilai[i];
    }

    cout << "\nOU6TPUT" << endl;
    for(int i=1; i <= num; i++){
        cout << "Nilai data ke-" << i << " : " << nilai[i] << endl;
    }

    return 0;
}
