class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(auto it:nums){
            mapp[it]++;
        }
        for(auto it:mapp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
    }
};