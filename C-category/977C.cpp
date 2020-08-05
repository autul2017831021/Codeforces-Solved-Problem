#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll a;
    sort(v.begin(),v.end());
    ll c=v[k-1]+1;
    if(k==0)
    {
        a=v[0]-1;
    }
    else
        a=v[k-1];
    if(a<1)
        cout<<"-1";
    else if(n==k)
    {
        cout<<a;return 0;
    }
    else if(v[k]-a==1)
    {
        cout<<a<<endl;return 0;
    }
    else if(v[k]-a>1)
    {
        cout<<a+1<<endl;return 0;
    }
    else
        cout<<"-1";return 0;

}
