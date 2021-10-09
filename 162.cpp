class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0; 
        if (nums[nums.size()-1] > nums[nums.size()-2])
            return nums.size()-1; 
        
        int left = 0, right = nums.size();
        int mid; 
        
        while (left < right ){
            mid = left + (right - left)/2; 
            if (nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                return mid;
            if (nums[mid] < nums[mid+1])
                left = mid + 1; 
            else if (nums[mid] < nums[mid-1])
                right = mid;
        }
        return -1;
    }
};