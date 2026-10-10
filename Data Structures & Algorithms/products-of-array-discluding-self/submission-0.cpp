class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixProduct{1};
        vector<int> postfixProduct{1};
        for(int i = 1; i < nums.size(); i++) {
            prefixProduct.push_back(prefixProduct[i-1] * nums[i-1]);
            postfixProduct.push_back(postfixProduct[i-1] * nums[nums.size() - i]);
        }

        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            result.push_back(prefixProduct[i] * postfixProduct[nums.size() - i - 1]);
        }

        return result;
        
    }
};
