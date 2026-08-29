class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        char a;
        while(l<r){
            a=s[l];
           s[l]=s[r];
           s[r]=a;
           l++;
           r--;
        }
    }
};