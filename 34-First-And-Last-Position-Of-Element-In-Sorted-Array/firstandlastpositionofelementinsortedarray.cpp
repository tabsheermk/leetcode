int binarySearch(vector<int>&nums, int target, int flag){
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target && flag == 0){
               res = mid;
               high = mid - 1;         
            }
            else if(nums[mid] == target && flag == 1){
                res = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums,target,0);
        int last = binarySearch(nums,target,1);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }