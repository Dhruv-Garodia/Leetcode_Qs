class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int l = s.size();
        int count = 0;
        int max_count = 0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(')
            {
                count++;
                max_count = max_count>count ? max_count : count;
                st.push('(');
            }
            else if(s[i]==')')
            {
                count--;
                st.pop();
            }
        }
        return max_count;
    }
};