class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        vector<int>hash(26,0);
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            int changes=(r-l+1)-maxfreq;
            while(changes>k){
                hash[s[l]-'A']--;
                maxfreq=0;
               l=l+1;
                for(int i=0;i<26;i++){
                    maxfreq=max(maxfreq,hash[i]);
                }
                changes=(r-l+1)-maxfreq;
                
            }
            if(changes<=k){
                    maxlen=max(maxlen,r-l+1);
                }
                r++;
            
        }
        return maxlen;
    }
};
