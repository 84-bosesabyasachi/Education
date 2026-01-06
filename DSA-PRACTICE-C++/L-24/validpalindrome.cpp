#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAlaphaNum(char ch){
        if((ch>= '0'&& ch<='9')||
        (tolower(ch)>= 'a' && tolower(ch)<= 'z')){
           return true; 
        }
        return false;
    } 


    bool isPalindrome(string s) {
        int st =0, end= s.length()-1;

        while(st< end){
            if(!isAlaphaNum(s[st])){
                st++; continue;
            }
            if(!isAlaphaNum(s[end])){
                end--; continue;
            }
            if(tolower(s[st])!= tolower(s[end])){
                return false;
            }
            st++; end--;
        }
        return true;
    }
};

int main(){
    Solution obj;
    string s = "A man, a plan, a canal: Panama";
    if(obj.isPalindrome(s)){
        cout<<"Palindrome"<<endl; 
    }else{
        cout<<"Not a Palindrome"<<endl; 
    }
    return 0;
}
