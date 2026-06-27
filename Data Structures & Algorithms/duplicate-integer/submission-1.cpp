class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> mpp;

        for(auto it: nums){
            mpp[it]++;
        }

        for(auto i :mpp){
            if(i.second>1){
                return true;
            }
        }

        return false;
        
    }
};