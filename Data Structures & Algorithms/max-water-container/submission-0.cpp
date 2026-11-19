class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1;
        int maxArea = 0;
        while(l < r)
        {
            int width =r - l;
            int height = min(heights[l], heights[r]);
            int area = height * width;
            maxArea = max(maxArea, area);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return maxArea;
    }
};
