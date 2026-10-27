class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        ans.reserve(m);

        ans.push_back(string(n, '.'));

        for (int i = 1; i < m; i++) {
            ans.push_back(string(n - 1, '#') + '.');
        }

        return ans;
    }
};