int placeInNums(vector<int>& n,int t)
    {
        n.push_back(t);
        sort(n.begin(),n.end());
        return binarySearch(n,t,0,n.size()-1);
    }
    
    int binarySearch(vector<int>& n, int t,int l,int h)
    {
        int m = (l+h)/2;
        while(l<=h)
        {
            if(n[m] == t)
                return m;
            else if(n[m]>t)
                return binarySearch(n,t,l,m-1);
            else if(n[m]<t)
                return binarySearch(n,t,m+1,h);
        }
        return placeInNums(n,t);
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return binarySearch(nums,target,low,high);
    }