class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==0)
            return ans;
        for(auto num:nums){
            int idx=abs(num)-1;
            if(nums[idx]<0)
                ans.push_back(idx+1);
            else{
                nums[idx]*=-1;
            }
        }
        return ans;
        
    }
};