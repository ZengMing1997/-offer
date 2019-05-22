#include <bits/stdc++.h>
using namespace std;
const int maxn = 500;
int a[maxn][maxn];
int main()
{
  int n;
  scanf("%d",&n);
  for(int i = 1 ; i <= n ;i++)
  {
    for(int j = 1 ; j <= n ; j ++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  int tar;
  while(scanf("%d",&tar))
  {
    int flag = 0;
    int row = 1 , col = n;
    while(row <= n && col >= 1)
    {
      if(a[row][col] == tar)
      {
        flag = 1;
        puts("1");
        break;
      }
      if(a[row][col] > tar) col--;
      else row++;
    }
    if(!flag)  puts("-1");
  }
}