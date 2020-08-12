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
#define inf 10000000000000000000
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
int main()
{
    string a,b,ans,pns;
    stack<int>s;
    cin>>a>>b;
    if(b.sz>a.sz){
        sort(a.rbg,a.ren);
        de a;r0
    }
    int aa[10]={0},in=-1,inn=-1;
    for(int i=0;i<a.sz;i++){
        aa[a[i]-'0']++;
    }
    for(int i=0;i<b.sz;i++)
    {
        int x=b[i]-'0',xx=0;
        for(int j=x;j>=0;j--){
            if(aa[j]>0){
                s.push(j);xx=1;
                aa[j]--;
                if(j<x){
                    xx=-1;
                }
                break;
            }
        }
        if(xx==-1){
            inn=i+1;break;
        }
        if(xx==0){
            in=i-1;break;
        }
    }
    for(int i=in;i>=0;i--){
        int x=b[i]-'0',y=s.top();s.pop();aa[y]++;
        for(int j=x-1;j>=0;j--){
            if(aa[j]>0){
                aa[j]--;
                s.push(j);
                inn=i+1;
                break;
            }
        }
        if(inn!=-1)break;
    }
    for(int i=inn;inn>=0 && i<a.sz;i++){
        for(int j=9;j>=0;j--){
            if(aa[j]>0){
                s.push(j);
                aa[j]--;
                break;
            }
        }
    }
    while(!s.empty()){
        ans.pb(s.top()+'0');
        s.pop();
    }
    reverse(ans.bg,ans.en);
    de ans;nl;
}
