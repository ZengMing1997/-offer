class Solution {
public:
    double Power(double base, int exponent) {
        double ans = 1.0;
        int flag = 0;
        if(exponent < 0) exponent = -exponent , flag = 1;
        while (exponent)
        {
          if(exponent&1) ans = ans*base;
          base = base * base;
          exponent = exponent / 2;
        }
        if(flag) return 1/ans;
        return ans;
        
    }
};