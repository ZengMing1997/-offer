#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool match(char* str, char* pattern)
    {
         if (str == NULL || pattern == NULL)
               return false;
          return matchCore(str,pattern);
    }
    bool matchCore(char* str, char* pattern)
    {
        if (*str == '\0' && *pattern == '\0') return true; //迭代终止条件
        if (*str != '\0' && *pattern == '\0') return false;//迭代终止条件
        if (*(pattern + 1) == '*')
        {
            if (*str == *pattern || (*pattern == '.' && *str != '\0'))
                return matchCore(str + 1, pattern) || matchCore(str, pattern + 2);
            else
                return matchCore(str, pattern + 2);
        }
          
        if (*str == *pattern || (*pattern == '.' && *str != '\0'))
            return matchCore(str+1, pattern+1);
          
        return false;
    }
};