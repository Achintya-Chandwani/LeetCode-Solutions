class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        vector<int> v;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]) v.push_back(nums1[i++]);
            else v.push_back(nums2[j++]);
        }
        while(i<n1){
            v.push_back(nums1[i++]);
        }
        while(j<n2){
            v.push_back(nums2[j++]);
        }
        if(n%2==1) return v[n/2];
        return (v[n/2]+v[n/2-1])/2.0;
    }
};