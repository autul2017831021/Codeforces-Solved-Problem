#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll a,b,f,k,c=0;
    cin>>a>>b>>f>>k;
    ll x=b;
    ll l,r;
    r=a-f;
    l=f;
    bool fx=1,left=1,right=0;
    for(ll i=1;i<=k;i++)
    {
        if(i%2==1)
        {
           if(l>x)
           {
               cout<<"-1";return 0;
           }
           x-=l;
           if(i==k)
           {
               if(r>x)
               {
                   c++;
               }
               if(r>b)
               {
                   cout<<"-1";return 0;
               }
           }
           else
           {
               if(2*r>x)
               {
                   c++;
                   x=b;
               }
               x=x-r;
               if(r>b)
               {
                   cout<<"-1";return 0;
               }
           }
        }
        else
        {
            if(r>x)
            {
                cout<<"-1";return 0;
            }
            x-=r;
            if(i==k)
            {
                if(l>x)
                   c++;
                if(l>b)
                {
                    cout<<"-1";return 0;
                }
            }
            else
            {
                if(2*l>x)
                {
                    c++;
                    x=b;
                }
                x=x-l;
                if(l>b)
                {
                    cout<<"-1";return 0;
                }
            }
        }
    }
    cout<<c<<endl;
}
