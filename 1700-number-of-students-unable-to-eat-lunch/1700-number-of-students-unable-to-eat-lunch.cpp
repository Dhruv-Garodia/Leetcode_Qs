class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2,0);
        for(int i:students)
            count[i]++;
        int remaining_snadwiches = sandwiches.size();
        for(int i:sandwiches)
        {
            // if the desired sandwich is not availble 
            if(!count[i])
                break;
            // if there are no sandwiched at all
            if(!remaining_snadwiches)
                break;
            remaining_snadwiches--;
            count[i]--;
        }
        return remaining_snadwiches;
    }
};