// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         trim_right(s);
//         int l = s.size();
//         int ind = -1;
//         for(int i=0;i<l;i++)
//         {
//             if(s[i]==' ')
//                 ind = i;
//         }
//         return l-ind;
//     }
// };

class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size();
        int right = l-1;
        while(s[right]==' ')
            right--;
        int left = right;
        while(left>=0 && s[left]!=' ')
            left--;
        return right-left;
    }
};