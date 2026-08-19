class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1&& nums[j]==nums[j-1])continue;
                int d=n-1;
                int c=j+1;
                while(c<d){
                    long long sum=(long long)nums[i]+nums[j]+nums[c]+nums[d];
                    if(sum<target){
                        c++;
                    }
                    else if(target<sum){
                        d--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[c],nums[d]});
                        c++;
                        d--;
                        while(c<d && nums[c]==nums[c-1])c++;
                        while(c<d && nums[d]==nums[d+1])d--;
                    }
                }
            }
        }
        return ans;
    }
};