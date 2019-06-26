#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int  NumberOf1(int n) {
         int ans = 0;
         int flag = 1;
         while(flag <= INT_MAX)
         {
             if(n&flag) ans ++;
             flag = flag << 1;
             cout<<flag<<endl;
         }
         return ans;
     }
};