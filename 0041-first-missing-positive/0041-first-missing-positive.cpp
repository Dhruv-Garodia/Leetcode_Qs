class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = nums.size();
        int i=0;
        // skip numbers less than 1
        for(;i<l;i++)
        {
            if(nums[i]>0)
                break;
        }
        int missing = 1;
        while(i<l)
        {
            if(missing-1 == nums[i])
            {
                i++;
                continue;
            }
            if(missing!=nums[i])
                break;
            missing++;
            i++;
        }
        return (missing==nums[l-1]) ? missing+1 : missing;
    }
};