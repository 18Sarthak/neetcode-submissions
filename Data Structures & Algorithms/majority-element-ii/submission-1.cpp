class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int e1=INT_MIN;
        int e2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && e2!=nums[i]){
                cnt1=1;
                e1=nums[i];
            }
            else if(cnt2==0 && e1!=nums[i]){
                cnt2=1;
                e2=nums[i];
            }
            else if(e1==nums[i]){
                cnt1++;
            }
            else if(e2==nums[i]){
                cnt2++;
            }
            else{
                cnt1--,cnt2--;
            }
        }
        vector<int>ls;
        cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(e1==nums[i]){
                cnt1++;
            }
            if(e2==nums[i]){
                cnt2++;
            }
        }
        int mini=(nums.size()/3)+1;
        if(cnt1>=mini){
            ls.push_back(e1);
        }
        if(cnt2>=mini){
            ls.push_back(e2);
        }
        return ls;
    }
};