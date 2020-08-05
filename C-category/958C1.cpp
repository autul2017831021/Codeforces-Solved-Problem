#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
typedef long long ll;
int main() {
	ll n,p;
	cin>>n>>p;
	vector<ll>v,w;
	ll m=-1;
	ll s=0;
	for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        s=s+x;
        v.pb(x);
    }
    ll bal=0;
    for(int i=0;i<n;i++)
    {
        bal+=v[i];
        if((bal%p)+((s-bal)%p)>m)
            m=(bal%p)+((s-bal)%p);
    }
    cout<<m<<endl;
}


