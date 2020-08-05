#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,x,y,c=0;
    string s;
    cin>>n>>x>>y>>s;
    for(ll i=0;i<n;i++)
    {
        if (i<=n-2 && (s[i]=='0' && s[i+1]=='1')) c++ ;
        if (i==n-1 && s[i]=='0') c++ ;
    }
    if(c==0)
        cout<<"0";
    else
        cout<<(c-1)*min(x,y)+y;
}
