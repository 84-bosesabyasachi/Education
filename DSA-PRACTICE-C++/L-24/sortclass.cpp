#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int count0=0, count1=0, count2=0;
        //O(n)
        for(int i=0; i<n; i++){
            if(nums[i]==0) count0++;
            else if (nums[i]==1) count1++;
            else count2++;
        }
        //O(n)
        int idx=0;
        for(int i=0; i<count0; i++){
            nums[idx++]=0;
        }
        for(int i=0; i<count1; i++){
            nums[idx++]=1;
        }
        for(int i=0; i<count2; i++){
            nums[idx++]=2;
        }

    }
};

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array (0s, 1s and 2s only): "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution sol;
    sol.sortColors(arr);
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
}