package EXTRA;

public class Day4 {
    public static void main(String[] args){
        int arr[]={1,3,5,4,5,4,3};
        int ans=0;
        for(int i: arr){
            ans=ans^i;
        }
        System.out.println(ans);
    }
}
