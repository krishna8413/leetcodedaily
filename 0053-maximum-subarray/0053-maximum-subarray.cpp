class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maNums=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            maNums=max(maNums+nums[i],nums[i]);
            res=max(res,maNums);
        }
        return res;
    }
};