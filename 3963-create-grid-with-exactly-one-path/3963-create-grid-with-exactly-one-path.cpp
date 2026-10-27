class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for (int i=0; i<m; i++){
            if (!i) {
                string dummy(n, '.');
                ans.push_back(dummy);
            }
            else {
                string dummy(n-1, '#');
                dummy += '.';
                ans.push_back(dummy);
            }
        }
        return ans;
    }
};