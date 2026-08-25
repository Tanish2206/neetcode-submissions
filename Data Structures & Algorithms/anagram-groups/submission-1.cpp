class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> u;
        for(int i=0;i<strs.size();i++){
            string a =strs[i];
            sort(a.begin(),a.end());
            u[a].push_back(strs[i]);
        }
        for(auto &[key, value]:u ){
            ans.push_back(value);
        }
        return ans;
    }
};
