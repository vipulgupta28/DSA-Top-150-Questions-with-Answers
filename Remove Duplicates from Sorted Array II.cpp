class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        if(n<=2) return n;


        int writeIndex = 2;

        for(int i =2; i<n; i++){
            if(nums[i] != nums[writeIndex - 2]){
                nums[writeIndex] = nums[i];
                writeIndex++;
            }
        }

        return writeIndex;
        
    }
};
