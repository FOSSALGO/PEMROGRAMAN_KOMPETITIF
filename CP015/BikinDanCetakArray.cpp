#include <iostream>

using namespace std;
int main() {
    int data[] = {4,1,8,2,9,7,5,6};
    
    cout << "[";
    for(int i=0;i<8;i++){
        if(i>0){
            cout << ", " ;
        }
        cout << data[i];
    }
    cout <<"]";

    return 0;
}
