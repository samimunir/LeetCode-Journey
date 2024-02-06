public class Solution {
    private int[] nums;
    private int target;

    public Solution(int[] nums, int target) {
        this.nums = nums;
        this.target = target;
    }

    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> nums_map = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++) {
            int complement = target - nums[i];
            if (nums_map.ContainsKey(complement) && (nums_map[complement] != i)) {
                int[] output = {nums_map[complement], i};
                return output;
            } else {
                nums_map.Add(nums[i], i);
            }
        }
        return null;
    }
}