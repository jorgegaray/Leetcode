/**
Length of Last Word 
**/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,e,count=0,l=s.size();
        
        if(l==0) return 0;
        for(e=l-1 ; e>=0; e--)
            if(s[e]!=' ') break;
            
        for(i=e ; i >= 0 ; i--){
            if(s[i]!=' ') count++;
            else break;
        }
        return count;
        
    }
};