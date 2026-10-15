// LeetCode Problem: Subarrays Distinct Element Sum of Squares I
// Link: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
// Difficulty: Easy
// Language: cpp

class Solution {
public:
    long long sumCounts(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            unordered_set<int> seen;
            for (int j = i; j < n; ++j) {
                seen.insert(nums[j]);
                long long d = seen.size();
                ans += d * d;
            }
        }
        return ans;
    }
};