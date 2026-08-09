class Solution {
public:
    int  solve(int ind,vector<int>& nums,int currXor){
        if(ind>=nums.size()){
            return currXor;
        }
        int include=solve(ind+1,nums,currXor^nums[ind]);
        int exclude=solve(ind+1,nums,currXor);
        return include+exclude;
    }
    
    int subsetXORSum(vector<int>& nums) {
        return solve(0,nums,0);
    }
};