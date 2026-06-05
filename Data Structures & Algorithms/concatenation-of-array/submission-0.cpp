class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int range = 1;
        vector<int> ans((range+1)*n);
        
        
        if (range >=1)
        {
            for (int j=1; j<=range; j++)
            {
                for (int i = 0 ;i<n ; i++)
                {
                    ans[i]  = nums[i];
                    ans[j*n + i] = nums[i];
                }
            }
                
        }
        return ans;
        
        
    }
};