class Solution {
public:
    void solve(int ind,vector<int>& nums,int target,vector<vector<int>>& ans,vector<int>& ds,int sum){
        int n=nums.size();
        if(ind ==n){
            if(sum==0){
            ans.push_back(ds);
            }
            return ;

        }
        if(sum>=nums[ind]){
        ds.push_back(nums[ind]);
        solve(ind,nums,target,ans,ds,sum-nums[ind]);
        ds.pop_back();
        }
        


        solve(ind+1,nums,target,ans,ds,sum);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int sum=target;
        solve(0,nums,target,ans,ds,sum);
        return ans;
    }
};
