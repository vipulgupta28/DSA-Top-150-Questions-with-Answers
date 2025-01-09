class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int n1 = nums1.size() - m;
        int n2 = nums2.size() - n;

        while(n1 !=0){
            nums1.pop_back();
            n1--;
        }

        while(n2 !=0){
            nums2.pop_back();
            n2--;
        }



        for(int i =0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        
    }
};
