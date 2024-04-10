class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int l = deck.size();
        queue<int> q;
        vector<int> ans (l);
        for(int i=0;i<l;i++)
        {
            q.push(i);
        }
        for(int card:deck)
        {
            int ind = q.front();
            q.pop();
            ans[ind] = card;
            if(!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};