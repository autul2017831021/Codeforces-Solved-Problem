#include<bits/stdc++.h>
using namespace std;
typedef int ll;
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
#define inf 10000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<int,int>a,pair<int,int>b)
{
    if(a.F<b.F || (a.F==b.F && a.S>b.S))return true;
    return false;
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
ll bigmod(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y=y>>1;
        x= (x*x)%mod;
    }
    return res;
}
ll Pow(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x);
        y=y>>1;
        x= (x*x);
    }
    return res;
}

void CC()
{
    int n;ne n;
    vc v[n+1];
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<n;i++){
        int c;ne c;v[c].pb(i);s.insert(c);
    }
    if(s.sz==1){
        de 0;nl;return;
    }
    int ans=300000;
    for(it=s.bg;it!=s.en;it++){
        int i=*it;
        int bal=0;
        int p=0;
        if(v[i].sz==1){
            if(v[i][0]!=0){bal++;}
            if(v[i][0]!=n-1)bal++;
            ans=min(ans,bal);
            continue;
        }
        for(int j=0;j<v[i].sz;j++){
            if(j==0){
                if(v[i][j]!=0){bal++;}
            }
            else if(j==v[i].sz-1){
                if(abs(v[i][j]-v[i][j-1])>1)bal++;
                if(v[i][j]!=n-1)bal++;
            }
            else{
                if(abs(v[i][j]-v[i][j-1])>1)bal++;
            }
        }
        ans=min(ans,bal);
    }
    de ans;nl;
}
int main()
{
    int tt;ne tt;
    while(tt--)
    {
        CC();
    }
}
