class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int diff=0;
        unordered_map<int, int> u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            diff=target - nums[i];
            if (u.find(diff)!=u.end()){
                if (u[diff]<i && u[diff]!=i){
                    v.push_back(u[diff]);
                    v.push_back(i);
                    return v;
                }
                else{
                    if(u[diff]!=i){
                        v.push_back(i);
                        v.push_back(u[diff]);
                        return v;
                    }
                    
                }
            }
        }
        return v;
    }
};
