#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && (b>0 || c>0 || d>0)) 
        {
            cout<<1<<endl;
            continue;
        }
        if(a==b+c)
        {
            cout<<2*a+1<<endl;
            continue;
        }
        if(b+c==0 && a>0)
        {
            if(c>=0)
            {
               cout<<a+1<<endl;
               continue;
               
            }
            else
            {
                cout<<c<<endl;
                continue;
            }
           
        }
        if(a>0 && (b==0 && c==0 && d==0 ))
        {
            cout<<a<<endl;
            continue;
        }
          if(a==0 && b==0 && c==0 && d==0 )
        {
            cout<<0<<endl;
            continue;
        }

    }
    return 0;
}