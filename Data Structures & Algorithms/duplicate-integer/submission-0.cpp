class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seenNumbers;

        for (int i=0; i<nums.size(); i++)
        {
            if (seenNumbers.count(nums[i]))
            return true;
            else
            seenNumbers.insert(nums[i]);
        }
        return false;
    }
};