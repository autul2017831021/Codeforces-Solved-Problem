#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
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
#define inf 1000000000000
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
#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b)
{
    if(a.F.S>b.F.S || (a.F.S==b.F.S && a.F.F<b.F.F))return true;
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
        int n;ne n;
        string s;
        ne s;
        int c=1;
        vc v;
        for(int i=1;i<s.sz;i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                v.pb(c);c=1;
            }
        }
        ll ans=0,one=0;
        if(c!=0){
            v.pb(c);
        }
        queue<ll>q;
        for(int i=0;i<v.sz;i++){
            if(v[i]>1)
                q.push(i);
        }
        for(int i=0;i<v.sz;i++){
            if(v[i]>1){
                ans++;
                q.pop();
            }
            else if(v[i]==1){
                ans++;
                if(q.empty()){
                    if(i+1<v.sz){
                        v[i+1]-=1;
                    }
                }
                else{
                    v[q.front()]-=1;
                    if(v[q.front()]==1){
                        q.pop();
                    }
                }
            }
        }
        de ans;nl;
    }
}

