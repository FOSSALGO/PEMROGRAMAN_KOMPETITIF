#include <iostream>

using namespace std;
int main() {
    int data[] = {4,3,8,2,9,2,8,7,5,6,9,21,5};
    
    int panjang = sizeof(data) / sizeof(int);
    
    cout << panjang;

    return 0;
}
