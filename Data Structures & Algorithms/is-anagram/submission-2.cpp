class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>S;
        if(s.length()!=t.length()){
            return false;
        }
        
         for(char it:s){
            S[it]++;
         }
         for(char it:t){
            S[it]--;
         }
         for(auto& it:S){
            if(it.second>0){
                return false;
            }
         }
         return true;

    }
};
