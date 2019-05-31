#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dirx[4] = {1,-1,0,0};
    int diry[4] = {0,0,1,-1};
    int vis[1111][1111];
    int count(int x,int y)
    {
      int sum = 0;
      while(x)
      {
        sum += x%10;
        x = x/10;
      }
      while(y)
      {
        sum += y%10;
        y = y/10;
      }
      return sum;
    }
    bool check(int lim,int n,int m,int x,int y)
    {
      if(x < 0 || y < 0 || x >= n || y >= m) return false;
      if(count(x,y) <= lim) return true;
      else return false;
    }
    int movingCount(int threshold, int rows, int cols)
    {
        memset(vis,0,sizeof(vis));
        int te = 0;
        if(check(threshold,rows,cols,0,0))
        {
          te = dfs(threshold,rows,cols,0,0);
        }
        
        return te ;
    }
    int dfs(int lim,int n,int m,int x,int y)
    {
      vis[x][y] = 1;
      int ans = 1;
      for(int i = 0 ; i < 4 ; i++)
      {
        int dx = x + dirx[i];
        int dy = y + diry[i];
        if(check(lim,n,m,dx,dy) && !vis[dx][dy])
        {
          ans += dfs(lim,n,m,dx,dy);
        }
      }
      return ans;
    }
};
/*int main()
{
  cout<<A.movingCount(-10,10,10);
  return 0;
}*/