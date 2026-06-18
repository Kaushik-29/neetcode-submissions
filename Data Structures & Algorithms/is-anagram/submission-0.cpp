class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()<t.length()||s.length()>t.length()){
            return false;
        }
        unordered_map<char,int> ss;
        unordered_map<char,int> st;

        for(char x:s){
            ss[x]++;
        }

        for(char x:t){
            st[x]++;
        }
        for(auto x:ss){
        if(ss==st){
            return true;
        }

        }

        return false;
        
    }
};
