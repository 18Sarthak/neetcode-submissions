class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(auto& it:nums){
            mapp[it]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto& [num,count]:mapp){
            bucket[count].push_back(num);
        }
        vector<int>res;
        for(int i=bucket.size()-1;i>=0 && res.size()<k;i--){
            for(auto& it:bucket[i]){
                res.push_back(it);
                if(res.size()==k){
                    break;
                }
            }
        }
        return res;
    }
};
