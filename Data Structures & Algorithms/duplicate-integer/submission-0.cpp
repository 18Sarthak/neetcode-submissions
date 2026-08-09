class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(auto it:nums){
            mapp[it]++;
        }
        for(auto& p:mapp){
            if(p.second>1){
                return true;
            }
        }
        return false;
    }
};