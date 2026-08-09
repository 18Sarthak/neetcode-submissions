class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(auto it:nums){
            mapp[it]++;
        }
        vector<pair<int,int>>store;
        for(auto& it:mapp){
            store.push_back({it.first,it.second});
        }
        sort(store.begin(), store.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; 
    });

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(store[i].first);
        }
        return ans;

        
    }
};
