/*
    Sami Munir
    February 6th, 2024
    LeetCode Journey
    1. Two Sum - C#
*/

public class Program {
    public static void Main(string[] args) {
        Console.WriteLine("1. Two Sum");
        Console.WriteLine("----------\n");

        Console.WriteLine("Solution -->");
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        Console.WriteLine("nums: " + GetStringArray(nums));
        Console.WriteLine("target: " + target);
        Solution solution = new Solution(nums, target);
        int[] output = solution.TwoSum(nums, target);
        Console.WriteLine("output: " + GetStringArray(output));
    }

    private static string GetStringArray(int[] input) {
        string output = "[ ";
        for (int i = 0; i < input.Length; i++) {
            output += input[i] + " ";
        }
        output += "\b]";
        return output;
    }
}