class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> list;
        for (char i : s){
            if (i=='(') list.push(i);
            else{
                if (list.empty()) list.push(i);
                else if (list.top() == '(') list.pop();
                else list.push(i);
            } 
        }
        return list.size();
    }
};