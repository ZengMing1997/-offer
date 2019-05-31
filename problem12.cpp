#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dirx[4] = {1,-1,0,0};
    int diry[4] = {0,0,1,-1};
    int vis[100][100];
    int ans = 0;
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(matrix == nullptr) return 0;
        int flag = 0;
        for(int i = 0 ; i < rows ; i++)
        {
          if(flag) break;
          for(int j = 0 ; j < cols ; j++)
          {
            if(matrix[i*cols+j] == str[0])
            {
              memset(vis,0,sizeof(vis));
              dfs(i,j,rows,cols,str,matrix,1);
              if(ans)
              {
                flag = 1;
                break;
              }
            }
          }
        }
        return flag;
    }
    bool check(int x,int y,int rows , int cols)
    {
      if(x < 0 || y < 0 || x >= rows || y >= cols) return false;
      return true;
    }

    void dfs(int x,int y,int rows,int cols,char* str , char* matrix,int lenth)
    {
      vis[x][y] = 1;
      if(lenth == strlen(str)) ans = 1;
      if(ans) return ;
      for(int i = 0 ; i < 4 ; i++)
      {
        int dx = x + dirx[i];
        int dy = y + diry[i];
        if(matrix[dx*cols+dy] == str[lenth] && !vis[dx][dy] && check(dx,dy,rows,cols))
        {
          dfs(dx,dy,rows,cols,str,matrix,lenth+1);
        }
      }
    }
};
/*int main()
{
  cout<<A.hasPath("ABCESFCSADEE",3,4,"ABCCED")<<endl;
}*/
