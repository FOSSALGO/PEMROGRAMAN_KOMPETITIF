#include <iostream>

using namespace std;
int main() {
    int n;
    
    cout << "Input size yang diinginkan: ";
    cin >> n;
    
    int data[n];
    //cin >> data[2];
    
    int panjang = sizeof(data) / sizeof(int);
    cout << "INPUT sebanyak " << panjang << " nilai:" << endl;
    for(int i=0;i<panjang;i++){
        cout << "data[" << i << "]: ";
        cin >> data[i];
    }
    
    //-------------------------------------------------
    
    cout << "data: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data[i];
    }
    cout <<"]\n";
    //-------------------------------------------------
    
    return 0;
}
