class Solution {
public:
    
    int findMax(vector<int>&piles){
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }
    
    int findTotalHr(vector<int>& piles,int h){
        long long res=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            res+=ceil((double)piles[i]/(double)h);
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=findMax(piles);
        while(l<=r){
            int mid=l+(r-l)/2;
            int totalHr=findTotalHr(piles,mid);
            if(totalHr<=h){
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return l;
    }
};
