#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int check(char* string,int i)
    {
      for(; i < strlen(string) ; i++)
      {
        if(string[i] < '0' || string[i] > '9') break;
      }
      return i;
    }
    bool isNumeric(char* string)
    {
      if(string == NULL) return false;
      int p = 0;
      if(string[p] == '+' || string[p] == '-') p++;
      p = check(string,p);
      if(string[p] == '.')
      {
        p = check(string,p+1);
      }
      if(string[p] == 'e' || string[p] == 'E')
      {
        if(string[p+1] == '+' || string[p+1] == '-') p++;
        p = check(string,p+1);
      }
      if(string[strlen(string)-1] == '.' || string[strlen(string)-1] == 'E' || string[strlen(string)-1] == 'e') return false;
      if(p == strlen(string)) return true;
      else return false;
    }
}AC;
int main()
{
  cout<<AC.isNumeric("-1.");
}