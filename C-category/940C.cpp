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
#define inf 1000000007
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
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
void kor()
{
   int n,k;ne n;ne k;int a[200]={0};set<char>st;vector<char>v;set<char>::iterator it;
   string s;ne s;
   for(int i=0;i<s.sz;i++){char c=s[i];st.insert(c);}
   for(it=st.bg;it!=st.en;it++){v.pb((*it));}
   sort(v.bg,v.en);//for(int i=0;i<v.sz;i++){de v[i];sp;}nl;
   if(k<=n)
   {
       vector<char>t;int in=0;bool f=1;
       for(int i=k-1;i>=0;i--)
       {
          if(f){
            for(int j=0;j<v.sz;j++)
            {
                if(v[j]==s[i]){in=j;break;}
            }
            if(in+1==v.sz){t.pb(v[0]);}
            else{f=0;t.pb(v[in+1]);}
          }
          else{t.pb(s[i]);}
          //de i;sp;
       }
       reverse(t.bg,t.en);
       for(int i=0;i<t.sz;i++){de t[i];}nl;
   }
   else
   {
       de s;
       for(int i=0;i<k-n;i++){de v[0];}
       return;
   }
}
main()
{
    kor();
}
