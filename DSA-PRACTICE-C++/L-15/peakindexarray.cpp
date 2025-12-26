#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st=1, end = A.size()-2;
        while(st<=end){
            int mid = st+(end-st)/2;

            if(A[mid-1]<A[mid]&& A[mid]>A[mid+1]){
                return mid;
            } else if(A[mid-1]<A[mid]){ //right
                    st=mid+1;
            } else{//left
                end=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {0,2,1,0};
    cout<<sol.peakIndexInMountainArray(arr)<<endl;
    return 0;
}