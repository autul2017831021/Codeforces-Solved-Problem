#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
#define mone printf("-1 ");
#define ne cin>>
#define hoynai cout<<"hoynai"<<endl;
bool bal(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
string ntos(ll n) {
     OS str1 ;
     str1 << n ;
     return str1.str();
}
ll ston(string s) {
     ll x ;
     SS str1(s);
     str1 >> x ;
     return x ;
}
main()
{
    ll n,x,s=0,h,c=0;
    vc v;
    ne n;
    for(int i=0;i<n;i++)
    {
        ne x;
        s=s+x;
        v.pb(s);
    }
    if(s%2==1)
    {
        cout<<"0";
        r0
    }
    for(int i=0;i<n-1;i++)
    {
        if((ll)2*v[i]==s)
            c++;
    }
    cout<<c;nl;r0
}
