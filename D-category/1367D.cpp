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
#define modd 998244353
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
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
ll bigmod(ll x, ll y,ll mod)
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
int main()
{
    int t;ne t;
    while(t--)
    {
        string s,t;ne s;
        ll n,z=0;ne n;
        ll b[60];
        vc v;
        for(int i=0;i<n;i++){
            ne b[i];
            if(b[i]==0){z++;v.pb(i);}
        }
        ll a[60],c[26]={0};
        memset(a,-1,sizeof a);
        priority_queue<ll>q;
        queue<ll>p;
        for(int i=0;i<s.sz;i++){
            ll x=s[i]-'a';
            if(c[x]==0)q.push(x);
            c[x]++;
        }
        while(1){
            ll x=q.top();
            if(c[x]>=z){
                for(int i=0;i<v.sz;i++){
                    a[v[i]]=x;
                    p.push(v[i]);
                }
                q.pop();
                break;
            }
            q.pop();
        }
        while(!p.empty()){
            ll in=p.front();
            p.pop();
            v.clear();
            for(int i=0;i<n;i++){
                if(b[i]){
                    b[i]-=abs(in-i);
                    if(b[i]==0){v.pb(i);p.push(i);}
                }
            }
            while(1){
                if(v.sz==0)break;
                ll x=q.top();
                if(c[x]>=v.sz){
                    for(int i=0;i<v.sz;i++){
                        a[v[i]]=x;
                    }
                    q.pop();break;
                }
                q.pop();
            }
        }
        for(int i=0;i<n;i++){
            t.pb(a[i]+'a');
        }
        de t;nl;
    }
}

