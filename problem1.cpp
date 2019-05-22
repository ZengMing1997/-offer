//p39数组中重复的数字
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5;
int a[maxn];
int main()
{
  int n;
  scanf("%d",&n);
  for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
  for(int i = 0 ; i < n ; i++)
  {
    while(i != a[i])
    {
      if(a[i] == a[a[i]]) 
      {
        cout<<a[i]<<endl;
        return 0;
      }
      swap(a[i],a[a[i]]);
    }
  }
  puts("-1");
}