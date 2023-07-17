#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
int n;
cin>>n;
int a[n];
int count=0;
for(int i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]==2) count++;
}
if(count%2!=0)
{
  cout<<-1<<endl;
}
else if(count==0)
{
  cout<<1<<endl;
}


else if(count%2==0)
{
  int ans=0;
  int m=count/2;
  for(int i=0;i<n;i++)
  {
    if(a[i]==2) ans++;
     if(ans==m)
     {
      ans=i;
      break;
     }
  }
  cout<<ans+1<<endl;
}

  }
    return 0;
}