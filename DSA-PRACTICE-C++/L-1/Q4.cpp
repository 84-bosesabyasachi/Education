 //SUM OF NUMBERS FROM a TO b
#include <iostream>
using namespace std;
int main(){
    int a, b;
    int ans;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;  
    ans = (b*(b + 1) / 2) - (a*(a - 1) / 2);
    cout<<"the result is "<<ans;
    return 0;
}



// SUM OF NUMBERS FROM 1 TO N

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int ans;
//     cout<<"Enter the number"<<endl;
//     cin>>n;  
//     ans = n*(n + 1) / 2;
//     cout<<"the result is "<<ans;
//     return 0;
// }
