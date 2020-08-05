#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(n==k)
    {
        cout<<"0";return 0;
    }
    if(k==1)
    {
        cout<<v[n-1]-v[0];return 0;
    }
    vector<ll>bal;
    for(ll i=1;i<n;i++)
        bal.push_back(v[i-1]-v[i]);
    sort(bal.begin(),bal.end());
    /*for(ll i=0;i<bal.size();i++)
        cout<<bal[i]<<endl;*/
    ll r=v[n-1]-v[0];
    for(ll i=0;i<k-1;i++)
        r+=bal[i];
    cout<<r<<endl;
}
