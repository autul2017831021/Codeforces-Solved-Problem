using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
main()
{
    ll n,c=0;
    cin>>n;
    map<ll,ll>a;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[x]++;
        c=max(c,a[x]);
    }
    cout<<c<<endl;
}


