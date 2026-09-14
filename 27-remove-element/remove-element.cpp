class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ci = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[ci] = nums[i];
                ci++;
            }
        }   
        return ci;
    }
};