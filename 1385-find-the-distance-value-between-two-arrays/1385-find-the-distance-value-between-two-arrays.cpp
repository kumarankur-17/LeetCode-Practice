class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int i = 0; i<arr1.size(); i++){
            auto it = lower_bound(arr2.begin(), arr2.end(), arr1[i]);
            int closest;
            if (it == arr2.begin()) closest = abs(*it - arr1[i]);
            else if (it == arr2.end()) closest = abs(arr2.back() - arr1[i]);
            else closest = min(abs(*it - arr1[i]), abs(*(it - 1) - arr1[i]));
            if (closest<=d) continue;
            ans++;
        }
        return ans;
    }
};