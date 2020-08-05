/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
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
#define inf 1000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES \n");
#define no printf("NO \n");
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define mod 1000000007
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
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
stack<ll>s;
void kor(vc v,ll n)
{
    ll l=0,h=n-1;s.push(0);
    string t="";
    while(h>=l)
    {
        if(v[h]>v[l]){
            if(s.top()>=v[l]){
                if(s.top()>=v[h]){break;}
                else{
                    s.push(v[h]);
                    h--;
                    t+="R";
                }
            }
            else{
                s.push(v[l]);l++;
                t+="L";
            }
        }
        else if(v[l]>v[h]){
            if(s.top()>=v[h]){
                if(s.top()>=v[l]){break;}
                else{
                    s.push(v[l]);
                    l++;
                    t+="L";
                }
            }
            else{
                s.push(v[h]);h--;
                t+="R";
            }
        }
       else if(v[h]==v[l])
       {
           if(s.top()>=v[h]){break;}
           else if(l==h){
               s.push(v[h]);h--;t+="R";
           }
           else
           {
               ll bal=1,sal=1;
               ll le=v[l],ri=v[h];
               for(int i=l+1;i<h;i++)
               {
                   if(v[i]>le){
                     bal++;
                     le=v[i];
                   }
                   else
                    break;
               }
               for(int i=h-1;i>l;i--)
               {
                   if(v[i]>ri){
                      sal++;
                      ri=v[i];
                   }
                   else
                    break;
               }
               if(bal>=sal)
               {
                   for(int i=0;i<bal;i++){
                     t=t+"L";
                   }
                   break;
               }
               else
               {
                   for(int i=0;i<sal;i++){
                     t=t+"R";
                   }
                   break;
               }
           }
       }
    }
    de t.sz;nl;
    for(int i=0;i<t.sz;i++){de t[i];}
}
main()
{
    ll n;ne n;
    vc v;
    for(int i=0;i<n;i++)
    {
        ll x;ne x;v.pb(x);
    }
    kor(v,n);
}
