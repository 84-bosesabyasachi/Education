#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    bool searchInRow (vector<vector<int>>& mat, int target, int row){
        int n = mat[0].size();
        int st = 0, end= n-1;
        while(st <= end){
            int mid= st+(end-st)/2;
            if(target == mat[row][mid]){
                return true;
            }else if(target>mat[row][mid]){
                st= mid+1;
            } else {
                end= mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
         //BS on tot rows
         int m = mat.size(), n = mat[0].size();

         int startRow = 0, endRow  = m-1;
         while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;

            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
                return searchInRow(mat, target, midRow);
                //found the row => BS on this row 
            } else if(target >=mat[midRow][n-1]){
                //down => mid+1;
                startRow = midRow + 1;
            } else {
                //up => left
                endRow = midRow-1;
            }
            
         }

         return false;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;
    if(sol.searchMatrix(matrix, target)){
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}