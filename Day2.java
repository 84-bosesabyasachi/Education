// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
//        Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 10^4
// -109 <= nums[i] <= 10^9 
// -109 <= target <= 10^9



// import java.util.HashMap;
// import java.util.Map;   
// public class Day2 {
//     public int[] twoSum(int[] nums, int target) {
//         Map<Integer, Integer> map = new HashMap<>();
//         for (int i = 0; i < nums.length; i++) {
//             int complement = target - nums[i];
//             if (map.containsKey(complement)) {
//                 return new int[] { map.get(complement), i };
//             }
//             map.put(nums[i], i);
//         }
//         throw new IllegalArgumentException("No two sum solution");
//     }
// }

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element 
// appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements 
// in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in
// nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.

// Custom Judge:

// The judge will test your solution with the following code:

// int[] nums = [...]; // Input array
// int[] expectedNums = [...]; // The expected answer with correct length

// int k = removeDuplicates(nums); // Calls your implementation

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.

// Example 1:
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

// Example 2:
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,,,,,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
 

// Constraints:

// 1 <= nums.length <= 3 * 10^4
// -100 <= nums[i] <= 100
// nums is sorted in non-decreasing order.

//solve
// Algorithm
// _________

// Input: A sorted integer array nums
// Output: The number of unique elements, with duplicates removed in-place from the start of the array

// Steps:
// Initialize pointer j = 1:

//   This will track the position where the next unique element should be placed.

// Loop through the array from index i = 1 to nums.length - 1:

//  For each element, check:

//   If nums[i] != nums[i - 1]:

//     It means a new unique element is found.

//     Place it at nums[j] → nums[j] = nums[i]

//     Increment j (move to the next insertion point)

// After the loop ends, return j:

//   j represents the count of unique elements in the modified array.

// Implementation in Java

// public class Day2 { 
//     public int removeDuplicates(int[] nums) {
//         if (nums.length == 0)
//          return 0; 
        
//         int j = 1; 
        
//         for (int i = 1; i < nums.length; i++) {
//             if (nums[i] != nums[i - 1]) { 
//                 nums[j] = nums[i]; 
//                 j++; 
//             }
//         }
        
//         return j; 
//     }
//     public static void main(String[] args) {
//         Day2 solution = new Day2();
//         int[] nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//         int k = solution.removeDuplicates(nums);
        
//         System.out.println("Number of unique elements: " + k);
//         System.out.print("Modified array: ");
//         for (int i = 0; i < k; i++) {
//             System.out.print(nums[i] + " ");
//         }
//     }
// }


class Solution2 {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length - 1;
        int max = 0;

        while (l < r) {
            int lh = height[l];
            int rh = height[r];
            int min_h = Math.min(lh, rh);
            int width = r - l;
            int area = min_h * width;

            max = Math.max(max, area);

            if (lh < rh) {
                l++;
            } else {
                r--;
            }
        }
        return max;
    }
    public static void main(String[] args) {
        Solution2 solution = new Solution2();
        
        int[] height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        int[] height2 = {1, 1};
        int[] height3 = {4, 3, 2, 1, 4};
        
        int result1 = solution.maxArea(height1);
        int result2 = solution.maxArea(height2);
        int result3 = solution.maxArea(height3);
        
        System.out.println("Max Area for height1: " + result1);
        System.out.println("Max Area for height2: " + result2);
        System.out.println("Max Area for height3: " + result3);
    }
}

