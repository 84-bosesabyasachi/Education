#include <iostream>
using namespace std;

// void bubblesort(int arr[], int n)
// {
//     for( int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1])
//             swap(arr[j],arr[j+1]);
//         }
//     }
//     return;
// }

// void printarray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of the array: "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     bubblesort(arr,n);
//     printarray(arr,n);
//     cout<<"Sorted array is: "<<endl;
//     for(int i=0; i<n; i++){
//         cout << arr[i]<<" ";
//     }
// }

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// selection sort
//  void selectionsort(int arr[], int n)
//  {
//      for(int i=0; i<n-1; i++){// unsorted part starting
//          int smallestIdx = i;
//          for(int j=i+1; j<n; j++){
//              if(arr[j]<arr[smallestIdx]){
//                  smallestIdx = j;
//              }
//          }
//          swap(arr[smallestIdx], arr[i]);
//      }
//      return;
//  }

// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of the array: "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     selectionsort(arr,n);
//     cout<<"Sorted array is: "<<endl;
//     for(int i=0; i<n; i++){
//         cout << arr[i]<<" ";
//     }
// }

// insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] >= curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // placing the curr el in its correct position
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "Sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}