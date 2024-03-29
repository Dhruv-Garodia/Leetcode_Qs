class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int left = 0, right = 0;
        int l = nums.size();
        int max_ele = *max_element(nums.begin(),nums.end());
        long long count = 0;
        int freq_ele = 0; // Track maximum frequency in the window
        
        while (right < l) {
            if(nums[right]==max_ele)
                freq_ele++;
            // Adjust window by removing elements from the left
            while (left<=right && freq_ele>=k) {
                if(nums[left]==max_ele)
                    freq_ele--;
                left++;
                count += l-right;
            }
            right++;
        }
        return count;
    }
};