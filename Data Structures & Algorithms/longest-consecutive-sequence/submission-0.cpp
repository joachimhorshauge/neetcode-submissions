class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();

        sort(nums.begin(), nums.end());
        int result = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) continue; 
            if(nums[i] == nums[i-1] + 1) count++;
            else count = 1;
            result = count > result ? count : result;
        }

        return result;
    }
};
