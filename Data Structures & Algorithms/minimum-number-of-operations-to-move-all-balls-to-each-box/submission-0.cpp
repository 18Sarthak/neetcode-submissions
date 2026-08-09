class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
       
        vector<int>output(n,0);
        for(int i=0;i<n;i++){
            int prefix=0;
            for(int j=i+1;j<n;j++){
                if(boxes[j]=='0'){
                    continue;
                }
                else{
                    
                    
                    output[i]+=(j-i);
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            int suffix=0;
            for(int j=i-1;j>=0;j--){
                if(boxes[j]=='0'){
                    continue;
                }
                else{
                    
                    output[i]+=(i-j);
                }
            }
        }
        return output;
    }
};