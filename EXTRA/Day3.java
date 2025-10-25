//public class Solution1 {
//    public void reverseString(char[] s) {
//        int i = 0;
//        int j = s.length - 1;
//        while (i < j) {
//            char ch = s[i];
//            s[i] = s[j];
//            s[j] = ch;
//            i++;
//            j--;
//        }
//    }
//
//    public static void main(String[] args) {
//        Solution1 solution = new Solution1();
//
//        char[] test1 = {'h', 'e', 'l', 'l', 'o'};
//        char[] test2 = {'H', 'a', 'n', 'n', 'a', 'h'};
//
//        solution.reverseString(test1);
//        System.out.println(test1);
//
//        solution.reverseString(test2);
//        System.out.println(test2);
//    }
//}
//
//class Solution {
//    public boolean isPalindrome(String s) {
//        if (s.isEmpty()) {
//        	return true;
//        }
//        int start = 0;
//        int last = s.length() - 1;
//        while(start <= last) {
//        	char currFirst = s.charAt(start);
//        	char currLast = s.charAt(last);
//        	if (!Character.isLetterOrDigit(currFirst )) {
//        		start++;
//        	} else if(!Character.isLetterOrDigit(currLast)) {
//        		last--;
//        	} else {
//        		if (Character.toLowerCase(currFirst) != Character.toLowerCase(currLast)) {
//        			return false;
//        		}
//        		start++;
//        		last--;
//        	}
//        }
//        return true;
//    }
//}
//
//class Solution {
//    public String reverseWords(String s) {
//        String[] st = s.trim().split("\\s+");
//        int a = st.length;
//        String[] str = new String[a];
//        int j=0;
//        for(int i=a-1;i>=0;i--){
//            str[j++] = st[i];
//        }
//        return String.join(" ",str);
//    }
//}
