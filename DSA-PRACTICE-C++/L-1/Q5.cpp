#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    string ans;
    cout<<"enter the value "<<endl; 
    cin>>a;

    bool isPrime = true;
    isPrime= (a<=1) ? false : [&](){
        for(int i=2; i*i<=a; i++)
        if(a%i == 0) return false;
        return true;
    }();
    ans = isPrime ? "Prime" : "Not Prime";
    cout<<"Value "<< ans <<endl;

    return 0; 

}

