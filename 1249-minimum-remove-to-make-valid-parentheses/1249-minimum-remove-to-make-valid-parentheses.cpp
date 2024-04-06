class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // whenever you find a ( => increase count
        // whenever you find a ) => decrease count and if count is 0 then continue
        // after this check in the reverse direction for excess (
        int count = 0;
        string ans = "";
        int l = s.size();
        for(int i=0;i<l;i++)
        {
            char ch = s[i];
            if(ch==')')
            {
                if(count)
                    count--;
                else
                    s[i] = '*';
            }
            else if(ch=='(')
                count++;
        }
        l = s.size();
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]=='(' && count)
            {
                count--;
                s[i] = '*';
            }
        }
        for(char ch:s)
            if(ch!='*')
                ans += ch;
        return ans;
    }
};