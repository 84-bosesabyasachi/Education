

public class Recursion1 {
    public static int fact(int n){
        if(n==1) return 1;
        return n*fact(n-1);
    }

    public static int Fib(int n){
        if(n==1 || n==0) return 1;
        return Fib(n-1)+Fib(n-2);
    }


    public static boolean isSorted(int arr[], int n) {
        if (n == 0 || n == 1) return true;
        return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
    }

    public static int findTarget(int arr[],int start,int end,int target){
        if(start>end) return -1;
        int mid=(start+end)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) end=mid-1;
        else start=mid+1;
        return findTarget(arr, start,end,target);
    }
    public static void main(String[] args) {
        // System.out.println(fact(5));
        System.out.println(isSorted(new int[]{1,3,2,4,5}, 5));
        System.out.println(findTarget(new int[]{1,2,3,4,5,6}, 0, 6, 4));
    }

}