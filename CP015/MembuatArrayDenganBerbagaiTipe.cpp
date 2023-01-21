#include <iostream>
#include <string>

using namespace std;
int main() {
    int data_a[8] = {4,1,8,2,9,7,5,6};
    int panjang = sizeof(data_a) / sizeof(int);
    cout << "data_a: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data_a[i];
    }
    cout <<"]\n";
    
    ///-------------------------------------------
    double data_b[] = {2.7,1.3,9.4,7.2,2.5,3,9.8,6,3.6};
    panjang = sizeof(data_b) / sizeof(double);
    cout << "data_b: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data_b[i];
    }
    cout <<"]\n";
    
    //--------------------------------------------------
    char data_c[] = {'Q', 'R', '&', '@', 'H', '@', 'd'};
    panjang = sizeof(data_c) / sizeof(char);
    cout << "data_c: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data_c[i];
    }
    cout <<"]\n";
    
    //--------------------------------------------------
    string data_d[] = {"Ahad", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    panjang = sizeof(data_d) / sizeof(string);
    cout << "data_d: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data_d[i];
    }
    cout <<"]\n";
    
    //------------------------------------------------
    bool data_e[] = {true, false, true,	false, false, true};
    panjang = sizeof(data_e) / sizeof(bool);
    cout << "data_e: [";
    for(int i=0;i<panjang;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data_e[i];
    }
    cout <<"]\n";
    
    return 0;
}
