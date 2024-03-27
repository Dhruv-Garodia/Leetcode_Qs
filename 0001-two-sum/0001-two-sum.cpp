// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     v.push_back(i);
//                     v.push_back(j);
//                     return v;
//                 }
//             }
//         }

//         v.push_back(-1);
//         v.push_back(-1);
//         return v;
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>> my_num;
        vector<int> indx;
        // how to ensure we store 
        for (int i=0;i<nums.size();i++)
        {
            my_num[nums[i]].push_back(i);
            // not posible to store like this
        }
        for (int i=0;i<nums.size();i++)
        {
            int rem = target - nums[i];
            // if same number is repeated twice
            if(rem == nums[i] && my_num[nums[i]].size()>1)
            {
                indx.push_back(i);
                indx.push_back(my_num[nums[i]][1]);
                return indx;
            }
            else if (my_num[rem].size()!=0 && i!=my_num[rem][0])
            {
                indx.push_back(i);
                indx.push_back(my_num[rem][0]);
                return indx;
            }
            else if(rem == nums[i] && my_num[nums[i]].size()<2 && my_num[rem].size()!=1)
            {
                indx.push_back(i);
                indx.push_back(my_num[rem][0]);
                return indx;
            }
        }
        indx.push_back(-1);
        indx.push_back(-1);
        return indx;
    }
};
