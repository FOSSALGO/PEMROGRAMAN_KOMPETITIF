#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n; // banyaknya elemen array = size = length
    int U[n];// bikin array U berukuran n
    
    // INPUT sekaligus hitung //SIGMA
    int sum = 0;
    for (int i=0;i<n;i++){
        cin >> U[i];
        sum = sum + (U[i]);
    }
    cout << sum << endl;
    return 0;
}
