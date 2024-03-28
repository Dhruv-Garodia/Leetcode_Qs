class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int l = nums.size();
        for(int i=1;i<l;i++)
        {
            if(nums[i]==nums[i-1])
                ans.push_back(nums[i]);
        }
        return ans;
    }
};