class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> count;
        int ans = 0;
        int n = nums.size();

        for(int num: nums){
            count[num]++;
        }

        for(const auto& pair:count){
            if(pair.second > n/2){
                ans = pair.first;
                break;
            }
        }
        return ans;
    }
};
