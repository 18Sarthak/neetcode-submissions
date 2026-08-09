class Solution {
public:
    void solve(int ind,int n,int k,vector<vector<int>>& ans,vector<int>& ds,int sum){
        if(ind==n+1){
            if(sum==k){
                ans.push_back(ds);
            }
            return ;
        }
        if(sum<=k){
        ds.push_back(ind);
        solve(ind+1,n,k,ans,ds,sum+1);
        ds.pop_back();
        }

        solve(ind+1,n,k,ans,ds,sum);

    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1,n,k,ans,ds,0);
        return ans;

    }
};