class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
        int m=nums1.size();
        int n=nums2.size();
        int low=0;
        int high=m;
        while(low<=high){
            int i=(low+high)/2;
            int j=((n+m+1)/2)-i;
            int maxLeft1 = (i == 0) ? INT_MIN : nums1[i - 1];
            int minRight1 = (i == nums1.size()) ? INT_MAX : nums1[i];

            int maxLeft2 = (j == 0) ? INT_MIN : nums2[j - 1];
            int minRight2 = (j == nums2.size()) ? INT_MAX : nums2[j];
            if(maxLeft1 <= minRight2 && maxLeft2 <= minRight1)
            {
                if((m+n)%2==0)
                {
                    return (max(maxLeft1,maxLeft2)+min(minRight1,minRight2))/2.0;
                }
                else{
                    return max(maxLeft1,maxLeft2);
                }
            }
            else if (maxLeft1 > minRight2){
                high=i-1;
            }
            else{
                low=i+1;
            }
        }
        return 0.0;
    }
};