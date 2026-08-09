class Solution {
public:
    
    void solve(int ind,vector<int>& nums,int n,vector<vector<int>>& ans,vector<int>& ds){
        if(ind>=n){
            ans.push_back(ds);
            return ;

        }
        
        ds.push_back(nums[ind]);
        solve(ind+1,nums,n,ans,ds);
        ds.pop_back();
        solve(ind+1,nums,n,ans,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
         solve(0,nums,n,ans,ds);
         return ans;
    }
};
