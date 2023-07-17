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
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
    // int total=(n*(n+1))/2;
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==-1 && v[i+1]==-1)
        {
            flag =true;
           break;
        }
    }
    if(flag==true)
    {
            cout<<sum+4<<endl;
    }
  else {
            if(sum==n){
            cout<<sum-4<<endl;
        }
         else{
        cout<<sum<<endl;

    }
  }
    }
    return 0;
}