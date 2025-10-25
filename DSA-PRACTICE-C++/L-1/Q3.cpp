#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;  
    cout<<"The Result is "<< ((a%2) ? "odd" : "even") << endl;
    return 0;
}
