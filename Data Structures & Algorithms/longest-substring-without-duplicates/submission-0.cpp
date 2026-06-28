class Solution {
public:
    int lengthOfLongestSubstring(string s) {


       int maxlength=0;
         unordered_map<char,int> mpp(256);
         for(int i=0;i<255;i++){
            mpp[i]=-1;
         }

        for(int i=0;i<s.length();i++){
           int left=0;
           int right=0;
    

           while(right<s.length()){
            if(mpp[s[i]]!=-1){
                if(mpp[s[right]]>=left){
                    left=mpp[s[right]]+1;
                }
            }

            int length=right-left+1;
            maxlength=max(length,maxlength);

            mpp[s[right]]=right;
            right++;
           }

        }

        return maxlength;
        
    }
};
