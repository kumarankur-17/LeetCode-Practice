class Solution {
public:
    string merge(string input, int k){
        string out = "";
        int j = 0;
        while (j<input.size()){
            int sum = 0;
            for (int i=0;  i<k; i++){
                if (i+j<input.size()) sum += input[i+j] - '0';
            }
            out += to_string(sum);
            j += k;
        }
        return out;
    }
    string digitSum(string s, int k) {
        string out = s;
        if (s.size()>k) out = merge(s, k);
        while (out.size()>k){
            out = merge(out, k);
        }
        return out;
    }
};