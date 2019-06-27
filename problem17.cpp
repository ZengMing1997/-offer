#include <bits/stdc++.h>
using namespace std;
int vis[10000];
void dfs(int index,int length,vector<int>V)
{
  if(index == length)
  {
    if(V[0] == 0) return ;
    for(auto i : V) cout<<i;puts("");
    return ;    
  }
  for(int i = 0 ; i <= 9 ; i++)
  {
    vector<int> te = V;
    te.push_back(i);
    dfs(index+1,length,te);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  vector<int> te;
  for(int i = 1 ; i <= n ; i++) dfs(0,i,te);
}