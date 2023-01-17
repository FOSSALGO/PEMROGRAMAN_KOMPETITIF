#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int sisa = n % 2;// n modulo 2
    if(sisa==0){
        cout << "GENAP" << endl;
    }else{
        cout << "GANJIL" << endl;
    }
    return 0;
}
