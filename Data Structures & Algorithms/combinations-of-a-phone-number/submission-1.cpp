class Solution {
public:
    void solve(int ind,string digits,vector<string>& ans,string mapping[10],string output){
       
        if(ind==digits.length()){
            ans.push_back(output);
            return;
        }
        int num=digits[ind]-'0';
        string val=mapping [num];
        
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(ind+1,digits,ans,mapping,output);
            output.pop_back();

        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,ans,mapping,"");
        return ans;
    }
};
