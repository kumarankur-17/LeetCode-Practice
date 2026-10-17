class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =  height.size();
        int i = 0;
        int j = n-1;
        int maxm = INT_MIN;
        while(i<j){
            maxm = max(maxm, (j-i)*min(height[i],height[j]));
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxm;
    }
};