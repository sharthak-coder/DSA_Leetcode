class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int dosa=INT_MAX;;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum += nums[j];
                int count=j-i+1;
                if(count>=l && count<=r && sum>0) dosa=min(dosa,sum);
                if(count>r) break;
            }
        }
        if(dosa==INT_MAX) return -1;
        else return dosa;
    }
};