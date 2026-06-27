class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        //   for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //                 index.push_back(i);
        //                 index.push_back(j);

        //         }
        //     }
        //   }


        unordered_map<int,int> mpp;


            for(int i=0;i<nums.size();i++){
                int k=target-nums[i];

                if(mpp.find(k)!=mpp.end()){
                     index.push_back(mpp[k]);
                    index.push_back(i);
                   
                }
                mpp[nums[i]]=i;
            }

          return index;
    }
};
