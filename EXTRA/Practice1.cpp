// //Find the smallest element in an array
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }

// int main(){
  
//   vector<int> arr1={2,5,1,3,0};
//   vector<int> arr2={8,10,5,7,9};

//   cout<<"the smalllest element is in the array is:" <<sortArr(arr1)<<endl;
//   cout<<"the smalllest element is in the array is:" <<sortArr(arr2)<<endl;
  
//     return 0;

  
// }

// Remove elements
  
#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;

 class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0; 
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!= val){
                nums[index]= nums[i];
                index++;
            }
        }
        return index;
    }
};

int main(){
    Solution obj;
    vector<int> arr1={3,2,2,3};
    vector<int> arr2={0,1,2,2,3,0,4,2};

    cout<<"the new length of the array is:" <<obj.removeElement(arr1,3)<<endl;
    cout<<"the new length of the array is:" <<obj.removeElement(arr2,2)<<endl;
  
    return 0;
}


