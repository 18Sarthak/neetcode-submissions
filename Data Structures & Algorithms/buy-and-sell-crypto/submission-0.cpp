class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }
        int l=0,r=1;
        int maxi=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
               maxi=max(maxi,prices[r]-prices[l]);
                r++;
            }
            else{
                l=r;
                r++;
            }
        }
        return maxi;
    }
};
