class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> my_map;
        for (int n : nums)
        {
            if(my_map[n])
            {
                return n;
            }
            my_map[n]=1;
        }
        return -1;
    }
};