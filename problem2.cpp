//p41不修改数组找到重复的数字
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int a[maxn] , n;
bool check(int l,int r)
{
  int cur = 0;
  for(int i = 0 ; i < n ; i++)
  {
    if(a[i] >= l && a[i] <= r) cur++;
  }
  return cur > r - l + 1;
}
int main()
{
  scanf("%d",&n);
  for(int i = 0 ; i < n + 1;i++) scanf("%d",&a[i]);
  int l = 1 , r = n;
  while(l < r)
  {
    int m = (l+r)/2;
    if(check(l,m)) r = m ;
    else l = m + 1;
  }
  cout<<l<<endl;
}