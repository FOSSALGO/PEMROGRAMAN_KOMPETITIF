// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int sn = 0;
    for(int i = 1;i<=n;i++){
        sn = sn + i;
        if(i>1){
            cout <<" + ";
        }
        cout << i;
    }
    cout << " = " << sn;

    return 0;
}
