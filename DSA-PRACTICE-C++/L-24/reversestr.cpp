#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, end= s.size()-1;
        while(st<end){
            swap(s[st++],s[end--]);
        }
    }
};

int main(){
    int n;
    cout<<"Enter the size of the character array: ";
    cin>>n;
    vector<char> arr(n);
    cout<<"Enter the characters of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution sol;
    sol.reverseString(arr);
    cout<<"Reversed character array is: "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
}