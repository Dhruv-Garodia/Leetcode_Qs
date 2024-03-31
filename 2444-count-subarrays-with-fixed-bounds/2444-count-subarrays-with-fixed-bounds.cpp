class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        int left = -1, right = -1, bad_index = -1;
        int l = nums.size();
        for(int i=0;i<l;i++)
        {
            if(!(minK<=nums[i] && nums[i]<=maxK))
                bad_index = i;
            if(nums[i]==minK)
                left = i;
            if(nums[i]==maxK)
                right = i;
            count += max(0, min(right,left)-bad_index);
        }
        return count;
    }
};