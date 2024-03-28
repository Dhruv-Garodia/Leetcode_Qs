class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // sliding window approach
        int left = 0, right = 0;
        int l = nums.size();
        int max_len = 0;
        unordered_map<int,int> mp;
        while(right<l)
        {
            int temp = nums[right++];
            mp[temp]++;
            while(left<right && mp[temp]>k)
            {
                mp[nums[left]]--;
                left++;
            }
            max_len = max(max_len,right-left);
        }
        return max_len;
    }
};