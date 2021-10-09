#include <bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(); 
    int n = nums2.size(); 
    double res = 0;
    
    if (m == 0){
        if (n%2 == 0)
            res = (nums2[n/2] + nums2[n/2 + 1])/2.0;
        else
            res = nums2[n/2];
        
        return res;
    }
    
    if (n == 0){
        if (m%2 == 0)
            res = (nums1[m/2] + nums1[m/2 + 1])/2.0;
        else
            res = nums1[m/2];
        
        return res;
        
    }
    
    for (int i = 0; i < n; i++)
        nums1.push_back(nums2[i]);
    
    sort(nums1.begin(), nums1.end());
    m = nums1.size();
    cout << m << endl;
    
    if (m%2 == 0)
        res = (nums1[m/2] + nums1[m/2 - 1])/2.0;
    else
        res = nums1[m/2];

    return res;    
}

int main(){
    vector<int> nums1; 
    vector<int> nums2;

    nums1.push_back(1);
    nums1.push_back(2);

    nums2.push_back(3);
    nums2.push_back(4);

    cout << findMedianSortedArrays(nums1, nums2);
    
    return 0;
}