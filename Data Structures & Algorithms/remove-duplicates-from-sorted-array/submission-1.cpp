class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
 
        int write = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[write - 1]) {
                nums[write] = nums[i];
                write += 1;
            }
        }

        return write;
    }
};