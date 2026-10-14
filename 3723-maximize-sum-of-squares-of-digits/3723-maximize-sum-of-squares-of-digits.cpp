class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9*num) return "";
        if (num == 1 && sum<10) return to_string(sum);
        if (sum<10) return to_string(sum) + string(num-1, '0');
        
        int sumd = 0;
        string ans = "";
        while(sumd+9 <= sum){
            ans += "9";
            sumd += 9;
        }

        if (sum-sumd != 0) ans += to_string(sum-sumd);
        if (ans.size() < num) ans += string((num-ans.size()),'0');
        return ans;
    }
};