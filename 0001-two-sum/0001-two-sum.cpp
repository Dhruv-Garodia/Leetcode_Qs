class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int l = nums.size();
        for(int i=0;i<l;i++)
        {
            int find_num = target - nums[i];
            if(mp.count(find_num))
                return {mp[find_num],i};
            mp[nums[i]] = i;
        }
        return {};
    }
};