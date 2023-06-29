int maxArea(vector<int>& height) {
        int size = height.size();
        int first = 0;
        int last = size - 1;
        int maxWater = INT_MIN;
        int area = 0;
        while(first < last){
            area = height[first] >= height[last] ? height[last] * (last - first) : height[first] * (last - first);
            maxWater = max(area,maxWater);
            if(height[first] > height[last])
                last--;
            else
                first++;
        }
        return maxWater;
    }