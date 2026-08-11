class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==k){
        //         cnt++;
        //     }
        // }
        for(int i=0;i<nums.size();i++){
            int solve=0;
            for(int j=i;j<nums.size();j++){
                solve+=nums[j];
                if(solve==k ){
                    cnt++;
                }
                
            }
        }
        return cnt;
    }
};