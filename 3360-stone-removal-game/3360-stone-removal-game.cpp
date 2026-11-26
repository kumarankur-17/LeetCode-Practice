class Solution {
public:
    bool canAliceWin(int n) {
        int step = 10;
        bool flag = true;
        for (int i = 0; i < 51; i++){
            if (n >= step){
                n -= step;
                step--;
            }else {
                if (i%2==0){
                    flag = false;
                }
                break;
            }
        }
        return flag;
    }
};