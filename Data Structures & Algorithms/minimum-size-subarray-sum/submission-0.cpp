class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r=0,l=0,sum=0,minSum=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                minSum=min(minSum,r-l+1);
                sum=sum-nums[l];
                l++;
            }
            r++;

        }
        return minSum==INT_MAX?0:minSum;
    }
};