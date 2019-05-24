//p75 跳青蛙
class Solution {
public:
    int jumpFloor(int number) {
        if(number == 1) return 1;
        if(number == 2) return 2;
        int t1 = 1, t2 = 2;
        for(int i = 3 ; i <= number ; i++)
        {
            int te = t2;
            t2 = t1 + t2;
            t1 = te;
        }
        return t2;
    }
};