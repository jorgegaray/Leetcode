/**
389. Find the Difference
**/
class Solution {
public:
    char findTheDifference(string s, string t) {
        int i;
        vector <int> v(300,0);
        for(i=0;i<s.size();i++){
            v[s[i]]++;
        }
        for(i=0;i<t.size();i++){
            v[t[i]]--;
            if(v[t[i]]<0) return t[i];
        }
        return s[i];
        
    }
};