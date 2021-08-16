#include <iostream>
using namespace std;
void func(int &);

int main(){
    int a;
    cout << ">> "; cin >> a;
    func(a);
    cout << "swuare root ";
    cout << "hasil : " << a << endl;
    return 0;
}

void func(int &a){
    sqrt(a);
}
