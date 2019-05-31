#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
  if(n == 1) return 0;
  if(n == 2) return 1;
  if(n == 3) return 2;

  int dp[11111];
  dp[0] = 0 , dp[1] = 1 , dp[2] = 2,dp[3] = 3;
  for(int i = 4 ; i <= n ; i++)
  {
    int MAX = 0;
    for(int j = 1 ; j <= i/2; j ++)
    {
      MAX = max(MAX,dp[j] * dp[i-j] );
    }
    dp[i] = MAX;
  }
  return dp[n];
}
int main()
{
  int n;
  while(cin>>n)
  cout<<solve(n)<<endl;
}