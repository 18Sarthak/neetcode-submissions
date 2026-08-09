class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mapp;
        for(auto it:nums){
            mapp[it]++;
        }

        int cnt=0;
        for(auto& it:mapp){
            int num=it.first;
            
            if(mapp.find(num-1)==mapp.end()){
                int length=1;
                int current=num;
                while(mapp.find(current+1)!=mapp.end()){
                    current++;
                    length++;
                }
                cnt=max(cnt,length);
            }
        }
        return cnt;
    }
};
