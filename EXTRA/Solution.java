package EXTRA;

class CoinChange {
    static int minCoins(int[] a, int n) {
        if(n == 0) {
            return 0;
        }
        int ans = Integer.MAX_VALUE;
        for(int i=0; i<a.length; i++) {
            if(n - a[i] >= 0) {
                int subAns = minCoins(a, n - a[i]);
                if(subAns != Integer.MAX_VALUE && subAns + 1 < ans) {
                    ans = subAns + 1;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int a[] = {7, 5, 1};
        int n = 18;
        System.out.println(minCoins(a, n));
    }
}
