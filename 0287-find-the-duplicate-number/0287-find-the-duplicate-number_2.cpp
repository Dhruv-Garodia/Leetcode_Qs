class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = nums.size();
        for(int i=0;i<l-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return 0;
    }
};