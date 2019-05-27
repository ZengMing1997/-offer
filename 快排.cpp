#include <bits/stdc++.h>
using namespace std;
int partition(int data[],int l,int r)
{
  int L = l - 1;
  for(int i = l ; i < r ; i++)
  {
    if(data[i] < data[r])
    {
      L++;
      swap(data[L],data[i]);
    }
  }
  L++;
  swap(data[L],data[r]);
  return L;
}
void quick(int data[] , int l,int r)
{
  if(l == r) return ;
  int index = partition(data,l,r);
  if(index > l) quick(data,l,index-1);
  if(index < r) quick(data,index+1,r);
}
int main()
{
  int a[] = {-1,2,3,9999,222,444,5,6666,7,8,11};
  quick(a,0,10);
  for(auto i : a) cout<<i<<" ";puts("");
} 