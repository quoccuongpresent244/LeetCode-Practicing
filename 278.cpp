// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0, right = n; 
        int mid;
        
        while (left < right){
            mid = left + (right - left)/2; 
            if (isBadVersion(mid) == true && isBadVersion(mid-1) == false)
                return mid;
            if (isBadVersion(mid))
                right = mid; 
            else 
                left = mid + 1;
        }
        
        if (isBadVersion(left) == true) return left;
        return -1;
    }
};