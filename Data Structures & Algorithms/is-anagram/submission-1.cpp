class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()>t.size() || s.size()<t.size()){
            return false;
        }

        if(s.size()==t.size()){
            unordered_map<char,int> ss;
            unordered_map<char,int> st;

            for(auto it:s){
                ss[it]++;
            }
             for(auto it:t){
                st[it]++;
            }

            if(ss==st){
                return true;
            }
            else{
                return false;
            }

        }
        
    }
};
