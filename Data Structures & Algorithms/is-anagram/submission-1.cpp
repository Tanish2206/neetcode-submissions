class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char, int> u;
        for (int i =0;i<s.size();i++){
            u[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            u[t[i]]--;
        }
        for (auto k=u.begin();k!=u.end();k++){
            if(k->second>0)return false;
        }
        return true;
        
    }
};
