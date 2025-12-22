package EXTRA;

public class Recursion {

    public static boolean isSorted(int[] arr, int n) {

        if (n <= 1) {
            return true;
        }


        if (arr[n-1] < arr[n-2]) {
            return false;
        }


        return isSorted(arr, n-1);
    }

    public static void main(String[] args) {

        int[] arr1 = {1, 2, 3, 4, 5};
        System.out.println(isSorted(arr1, 5));


        int[] arr2 = {1, 2, 3, 6, 5};
        System.out.println(isSorted(arr2, 5));


        int[] arr3 = {7};
        System.out.println(isSorted(arr3, 1));
    }
}