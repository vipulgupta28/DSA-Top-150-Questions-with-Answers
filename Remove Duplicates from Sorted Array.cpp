class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        auto last = unique(nums.begin(), nums.end());
        nums.erase(last,nums.end());

        int ans = nums.size();
        return ans;
        
    }
};
