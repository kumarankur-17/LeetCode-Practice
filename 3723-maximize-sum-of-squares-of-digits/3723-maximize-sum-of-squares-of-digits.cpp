class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9*num) return "";
        if (num == 1 && sum<10) return to_string(sum);
        if (sum<10) return to_string(sum) + string(num-1, '0');

        string ans = string(sum / 9, '9');

        if (sum % 9 != 0) ans += to_string(sum % 9);
        ans += string(num - ans.size(), '0');

        return ans;
    }
};