class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = size(numbers) - 1;

        while (left < right) {
            if (numbers[left] + numbers[right] > target) {
                right--;
                continue;
            }

            if (numbers[left] + numbers[right] < target) {
                left++;
                continue;
            }

            break;
        }

        vector<int> res = {left + 1, right + 1};
        return res;
    }
};
