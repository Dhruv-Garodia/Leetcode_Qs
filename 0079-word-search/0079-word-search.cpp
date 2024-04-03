class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        int l = word.size();

        function <bool(int,int,int)> backtrack = [&](int i,int j,int k)
        {
            if(k==l)
                return true;
            if( i<0 || i>=r || j<0 || j>=c || board[i][j]!=word[k])
                return false;
            
            char temp = board[i][j];
            board[i][j] = '\0';

            if(backtrack(i-1,j,k+1)||backtrack(i+1,j,k+1)||backtrack(i,j-1,k+1)||backtrack(i,j+1,k+1))
                return true;
            
            board[i][j] = temp;
            return false;
        };

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                if(backtrack(i,j,0))
                    return true;
        }
        return false;
    }
};