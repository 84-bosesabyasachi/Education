#include<iostream>
using namespace std;

// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     inc(n);
//     return 0;
// }

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// bool Sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray = Sorted(arr+1,n-1);
//     return(arr[0]<arr[1] && restArray);
// }
// int main(){
//     int arr[]={1,6,3,4,5};
//     cout<<Sorted(arr,5)<<endl;
//     return 0;
// }

//RAT IN MAZE


// bool isSafe(int **arr, int x, int y, int n){
//     if(x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == 1){
//         return true;
//     }
//     return false;
// }

// bool ratInMaze(int **arr, int x, int y, int n, int **solArr){
//     // Base case: reached destination
//     if(x == (n-1) && y == (n-1) && arr[x][y] == 1){
//         solArr[x][y] = 1;
//         return true;
//     }
    
//     // Check if current position is safe
//     if(isSafe(arr, x, y, n)){
//         solArr[x][y] = 1;
        
//         // Try moving right
//         if(ratInMaze(arr, x, y+1, n, solArr)){
//             return true;
//         }
        
//         // Try moving down
//         if(ratInMaze(arr, x+1, y, n, solArr)){
//             return true;
//         }
        
//         // Backtrack: unmark current position
//         solArr[x][y] = 0;
//         return false;
//     }
    
//     return false;
// }

// int main(){
//     int n;
//     cin >> n;
    
//     // Allocate memory for maze
//     int **arr = new int*[n];
//     for(int i = 0; i < n; i++){
//         arr[i] = new int[n];
//     }
    
//     // Read maze
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> arr[i][j];
//         }
//     }
    
//     // Allocate memory for solution array
//     int **solArr = new int*[n];
//     for(int i = 0; i < n; i++){
//         solArr[i] = new int[n];
//         for(int j = 0; j < n; j++){
//             solArr[i][j] = 0;
//         }
//     }
    
//     // Check if starting position is valid
//     if(arr[0][0] == 0){
//         // No output if starting position is blocked
//         return 0;
//     }
    
//     if(ratInMaze(arr, 0, 0, n, solArr)){
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 cout << solArr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     // If no solution exists, print nothing (as per typical competitive programming format)
    
//     // Free allocated memory
//     for(int i = 0; i < n; i++){
//         delete[] arr[i];
//         delete[] solArr[i];
//     }
//     delete[] arr;
//     delete[] solArr;
    
//     return 0;
// }

