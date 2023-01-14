#include <iostream>

using namespace std;
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    int lower = a + 1;
    int upper = b - 1;
    if(b<a){
        lower = b + 1;
        upper = a - 1;
    }
    for(int i = lower; i<=upper;i++){
        cout << i <<" ";
    }
    return 0;
}
