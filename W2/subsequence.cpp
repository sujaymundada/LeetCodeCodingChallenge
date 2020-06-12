class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true; 
        int counter = 0;
        for(auto c: t){
            if(c==s[counter]) counter++;
            if(counter==s.size()) return true; 
        }
        return false;
    }
};
