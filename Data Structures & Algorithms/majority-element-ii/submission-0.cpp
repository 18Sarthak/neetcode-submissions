class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int n=nums.size();
        for(auto it:nums){
            mapp[it]++;
        }
        int cnt=0;
        vector<int>ans;
        for(auto it:mapp){
            if(it.second>n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};