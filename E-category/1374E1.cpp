/*    YOU VIRGIN ASSHOLE
      WHY ARE YOU HERE?    */
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
#define inf 100000000000
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
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
main()
{
    ll n,k;
    ne n;ne k;
    priority_queue<ll,vector<ll>,greater<ll> >a,b,c;
    ll x=0,y=0;
    while(n--)
    {
        ll aa,bb,cc;
        cin>>aa>>bb>>cc;
        if(cc!=bb){
            if(cc==1){
                y++;
                b.push(aa);
            }
            else{
                x++;
                a.push(aa);
            }
        }
        else{
            if(bb==1){
                y++;x++;
                c.push(aa);
            }
        }
    }
    if(y<k || x<k){mone;r0}
    ll ans=0;
    x=k;y=k;
    while(1)
    {
        if(c.sz>0 && a.sz>0 && b.sz>0){
            if(c.top()<=a.top()+b.top()){
                ans+=c.top();
                c.pop();
            }
            else{
                ans+=(a.top()+b.top());
                a.pop();b.pop();
            }
            x--;y--;
        }
        else{
            if(c.sz>0){
                if(a.sz>0 && x>0){
                    x--;
                    if(a.top()<c.top() && y<1){
                        ans+=a.top();
                        a.pop();
                    }
                    else{
                        ans+=c.top();
                        c.pop();
                        y--;
                    }
                }
                else if(b.sz>0 && y>0){
                    y--;
                    if(b.top()<c.top() && x<1){
                        ans+=b.top();
                        b.pop();
                    }
                    else{
                        ans+=c.top();
                        c.pop();
                        x--;
                    }
                }
                else if(max(x,y)>0){
                    ans+=c.top();
                    c.pop();
                    x--;y--;
                }
            }
            else{
                if(a.sz>0 && x>0){
                    x--;
                    ans+=a.top();
                    a.pop();
                }
                if(b.sz>0 && y>0){
                    y--;
                    ans+=b.top();
                    b.pop();
                }
            }
        }
        if(x<1 && y<1){
            break;
        }
    }
    de ans;nl;
}
