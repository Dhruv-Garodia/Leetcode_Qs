#include <unordered_map>
#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        int ls = s.size(), lt = t.size();
        if (ls != lt)
            return false;
        
        std::unordered_map<char, char> s_to_t_map;
        std::unordered_map<char, char> t_to_s_map;

        for (int i = 0; i < ls; ++i) {
            char s_char = s[i];
            char t_char = t[i];

            // Check mapping from s to t
            if (s_to_t_map.find(s_char) != s_to_t_map.end()) {
                if (s_to_t_map[s_char] != t_char)
                    return false;
            } else {
                s_to_t_map[s_char] = t_char;
            }

            // Check mapping from t to s
            if (t_to_s_map.find(t_char) != t_to_s_map.end()) {
                if (t_to_s_map[t_char] != s_char)
                    return false;
            } else {
                t_to_s_map[t_char] = s_char;
            }
        }
        
        return true;
    }
};
