double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int size = m + n;
        for(int i = 0;i<n;i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        double median = 0;
        if(size % 2 == 0)
        {
            median = (double(nums1[size/2]) + double(nums1[(size/2) - 1]))/2;
        }
        else
            median = (nums1[((size + 1) / 2) - 1]);
        return median;
    }