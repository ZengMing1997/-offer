#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   void reOrderArray(vector<int> &array) {
     int L = -1;
     for(int i = 0 ; i < array.size() ; i++)
     {
       if(array[i]&1)
       {
         L++;
         swap(array[L],array[i]);
       }
     }
   }
};