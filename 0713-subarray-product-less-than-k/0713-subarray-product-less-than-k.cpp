class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        if(k<2)
            return count;
        int left = 0, right = 0;
        int l = nums.size();
        int prod = 1;
        for(;right<l;right++)
        {
            prod *= nums[right];
            while(left<=right && prod>=k)
                prod /= nums[left++];
            count += right-left+1;
        }
        return count;
    }
};