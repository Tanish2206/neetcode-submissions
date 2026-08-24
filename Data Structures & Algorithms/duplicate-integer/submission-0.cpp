class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        for (auto k=u.begin();k!=u.end();k++){
            if(k->second>1){
                return true;
            }
        } 
        return false;
    }
};