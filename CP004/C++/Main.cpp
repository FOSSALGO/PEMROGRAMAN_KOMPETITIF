// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    cout<<"FOR TO------------------------------\n";
    for(int i=2;i<10;i+=3){
        cout<<i<<" ";
    }
    
    cout<<"\nFOR DOWN TO------------------------------\n";
    for(int i=23;i>=-7;i-=2){
        cout<<i<<" ";
    }
    
    cout<<"\nARRAY---------------------------------\n";
    double A[] = {1,3,6,2,8,9,15};
    
    cout<<"\nFOR TO------------------------------\n";
    int length = sizeof(A)/sizeof(A[0]);
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    
    cout<<"\nFOR EACH------------------------------\n";
    for(double element : A){
        cout<<element<<" ";
    }
    return 0;
}
