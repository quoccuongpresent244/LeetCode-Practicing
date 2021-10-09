class Solution {
public:
    int mySqrt(int x) {
        if (x == 1)
            return x; 
        
        int l = 0, r = x; 
        long long mid;
        int ans;
        
        while (l <= r){
            mid = (l + r)/2; 
            if (mid*mid == x)
                return mid;
            if (mid*mid < x){
                l = mid + 1; 
                ans = mid;
            }
            else 
                r = mid - 1;
                
        }
        return ans;
    }
};