#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b){
        cout<<"MIN = "<< a <<"\n";
        cout<<"MAX = "<< b <<"\n";
    }else{
        cout<<"MIN = "<< b <<"\n";
        cout<<"MAX = "<< a <<"\n";
    }
    return 0;
}
