public class Solution1 {
    public void reverseString(char[] s) {
        int i = 0;
        int j = s.length - 1;
        while (i < j) {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            i++;
            j--;
        }
    }

    public static void main(String[] args) {
        Solution1 solution = new Solution1();

        char[] test1 = {'h', 'e', 'l', 'l', 'o'};
        char[] test2 = {'H', 'a', 'n', 'n', 'a', 'h'};

        solution.reverseString(test1);
        System.out.println(test1);

        solution.reverseString(test2);
        System.out.println(test2);
    }
}
