class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v,v1;
        v.insert(v.end(),nums.begin(),nums.end());
        v.insert(v.end(),v.begin(),v.end());
        return v;

    }
};