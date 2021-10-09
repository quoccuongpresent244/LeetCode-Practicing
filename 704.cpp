class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot, l = 0, r = nums.size() - 1;
        
        while (l <= r){
            pivot = (l + r) /2;
            if (target == nums[pivot]) return pivot;
            if (target < nums[pivot]) r = pivot - 1; 
            else l = pivot + 1;
        }
        return -1;
    }
};