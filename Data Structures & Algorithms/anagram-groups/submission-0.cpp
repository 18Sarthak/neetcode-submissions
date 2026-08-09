class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string,vector<string>>group;

            for(const string& it:strs){
                string key=it;
                sort(key.begin(),key.end());
                group[key].push_back(it);
            }
            vector<vector<string>>ans;
            for(auto& pair:group){
                ans.push_back(pair.second);
            }
            return ans;
    }
};
