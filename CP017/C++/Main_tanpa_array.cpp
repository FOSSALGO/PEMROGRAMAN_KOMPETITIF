#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n; // banyaknya elemen
    
    // INPUT sekaligus hitung //SIGMA
    int sum = 0;
    for (int i=0;i<n;i++){
        int elemen;
        cin >> elemen;
        sum = sum + elemen;
    }
    cout << sum << endl;
    return 0;
}
